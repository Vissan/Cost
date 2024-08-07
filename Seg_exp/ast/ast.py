import clang.cindex
from collections import defaultdict
import csv

# 定义要统计的语句类型
STATEMENTS = {
    clang.cindex.CursorKind.FUNCTION_DECL: 'FunDef',  # 函数定义
    clang.cindex.CursorKind.CALL_EXPR: 'FunApp',  # 函数调用
    clang.cindex.CursorKind.LAMBDA_EXPR: 'letlambda',  # Lambda表达式
    clang.cindex.CursorKind.BINARY_OPERATOR: {  # 二元操作符
        '&&': 'BoolAnd',
        '||': 'BoolOr',
        '+': 'Add',
        '-': 'Sub',
        '*': 'Mult',
        '/': 'Div',
        '%': 'Mod',
        '<': 'CondLT',
        '<=': 'CondLE',
        '>': 'CondGT',
        '>=': 'CondGE',
        '==': 'CondEq',
        '!=': 'CondNE',
    },
    clang.cindex.CursorKind.FLOATING_LITERAL: 'FloatLiteral',  # 浮点数常量
    clang.cindex.CursorKind.INTEGER_LITERAL: 'IntLiteral',  # 整数常量
    clang.cindex.CursorKind.VAR_DECL: 'letdata',  # 变量声明
    clang.cindex.CursorKind.COMPOUND_STMT: 'closure',  # 复合语句块
    clang.cindex.CursorKind.TEMPLATE_REF: 'templateMatch',  # 模板引用
    clang.cindex.CursorKind.CLASS_DECL: 'ClassDef',  # 类定义
    clang.cindex.CursorKind.FOR_STMT: 'ForLoop',  # for 循环
    clang.cindex.CursorKind.WHILE_STMT: 'WhileLoop',  # while 循环
    clang.cindex.CursorKind.DO_STMT: 'DoWhileLoop',  # do-while 循环
    clang.cindex.CursorKind.IF_STMT: 'IfStmt',  # if 语句
    clang.cindex.CursorKind.CXX_TRY_STMT: 'TryBlock',  # try 块
    clang.cindex.CursorKind.CXX_CATCH_STMT: 'CatchBlock',  # catch 块
    clang.cindex.CursorKind.CXX_THROW_EXPR: 'ThrowExpr',  # throw 表达式
    clang.cindex.CursorKind.TEMPLATE_TYPE_PARAMETER: 'TemplateTypeParam',  # 模板类型参数
    clang.cindex.CursorKind.TEMPLATE_NON_TYPE_PARAMETER: 'TemplateNonTypeParam',  # 模板非类型参数
    clang.cindex.CursorKind.TEMPLATE_TEMPLATE_PARAMETER: 'TemplateTemplateParam',  # 模板模板参数
}


# 递归遍历AST并记录每种语句类型的数量
def count_statements(node, counts):
    if node.kind in STATEMENTS:
        if isinstance(STATEMENTS[node.kind], str):
            counts[STATEMENTS[node.kind]] += 1
        elif isinstance(STATEMENTS[node.kind], dict):
            if node.kind == clang.cindex.CursorKind.BINARY_OPERATOR or node.kind == clang.cindex.CursorKind.UNARY_OPERATOR:
                operator = get_operator(node)
                if operator in STATEMENTS[node.kind]:
                    counts[STATEMENTS[node.kind][operator]] += 1
            elif node.kind == clang.cindex.CursorKind.TYPE_REF:
                for type_name, statement_type in STATEMENTS[node.kind].items():
                    if type_name in node.displayname:
                        counts[statement_type] += 1
    for child in node.get_children():
        count_statements(child, counts)


# 获取操作符的类型
def get_operator(node):
    tokens = list(node.get_tokens())
    if len(tokens) > 1:
        return tokens[1].spelling  # 操作符通常是第二个token
    return ""


def main(file_path):
    # 初始化Clang索引
    index = clang.cindex.Index.create()
    # 解析C++文件
    translation_unit = index.parse(file_path)

    # 初始化计数器
    counts = defaultdict(int)
    # 遍历AST并统计语句
    count_statements(translation_unit.cursor, counts)

    # 初始化要写入CSV文件的数据
    data = []

    # 添加属性名称到第一行
    attributes = []
    for statement_type, value in STATEMENTS.items():
        if isinstance(value, dict):
            attributes.extend(value.values())
        else:
            attributes.append(value)
    data.append(attributes)

    # 添加计数值到第二行
    counts_row = []
    for statement_type, value in STATEMENTS.items():
        if isinstance(value, dict):
            for key in value.values():
                counts_row.append(counts.get(key, 0))
        else:
            counts_row.append(counts.get(value, 0))
    data.append(counts_row)

    # 将数据写入CSV文件
    with open('../statement_counts.csv', 'w', newline='') as csvfile:
        writer = csv.writer(csvfile)

        # 写入数据
        writer.writerows(data)

    print("CSV file 'statement_counts.csv' has been created.")


if __name__ == '__main__':
    # 设置libclang.dll的路径（假设Clang安装在C:\Program Files\LLVM）
    clang.cindex.Config.set_library_file(r'C:\Program Files\LLVM\bin\libclang.dll')

    # 替换为实际的C++文件路径
    cpp_file_path = '../example.cpp'
    main(cpp_file_path)
