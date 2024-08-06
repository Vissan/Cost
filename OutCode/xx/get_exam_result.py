import os
import csv
import clang.cindex
from collections import defaultdict

# 定义要统计的语句类型
STATEMENTS = {
    clang.cindex.CursorKind.FUNCTION_DECL: 'FunDef',  # 函数定义
    clang.cindex.CursorKind.CALL_EXPR: 'FunApp',  # 函数调用
    clang.cindex.CursorKind.LAMBDA_EXPR: 'letlambda',  # Lambda表达式
    clang.cindex.CursorKind.BINARY_OPERATOR: 'BinaryOperator',  # 二元操作
    clang.cindex.CursorKind.VAR_DECL: 'letdata',  # 变量声明
    clang.cindex.CursorKind.COMPOUND_STMT: 'closure',  # 复合语句块
    clang.cindex.CursorKind.TEMPLATE_REF: 'templateMatch',  # 模板引用
    clang.cindex.CursorKind.CLASS_DECL: 'ClassDef',  # 类定义
    clang.cindex.CursorKind.FOR_STMT: 'ForLoop',  # for 循环
    clang.cindex.CursorKind.WHILE_STMT: 'WhileLoop',  # while 循环
    clang.cindex.CursorKind.DO_STMT: 'DoWhileLoop',  # do-while 循环
    clang.cindex.CursorKind.IF_STMT: 'IfStmt',  # if 语句
    clang.cindex.CursorKind.SWITCH_STMT: 'SwitchStmt',  # switch 语句
    clang.cindex.CursorKind.CASE_STMT: 'CaseStmt',  # case 语句
    clang.cindex.CursorKind.DEFAULT_STMT: 'DefaultStmt',  # default 语句
    clang.cindex.CursorKind.CONDITIONAL_OPERATOR: 'TernaryOp',  # 三元操作符
    clang.cindex.CursorKind.ARRAY_SUBSCRIPT_EXPR: 'ArrayDecl',  # 数组声明
    clang.cindex.CursorKind.FIELD_DECL: 'FieldDecl',  # 字段声明
    clang.cindex.CursorKind.ENUM_CONSTANT_DECL: 'EnumConstantDecl',  # 枚举常量声明
    clang.cindex.CursorKind.PARM_DECL: 'ParamDecl',  # 参数声明
    clang.cindex.CursorKind.TYPEDEF_DECL: 'TypedefDecl',  # 类型定义
    clang.cindex.CursorKind.STRUCT_DECL: 'StructDecl',  # 结构定义
    clang.cindex.CursorKind.FLOATING_LITERAL: 'FloatDecl',  # 浮点常量
    clang.cindex.CursorKind.INTEGER_LITERAL: 'IntegerDecl',  # 整形常量
    clang.cindex.CursorKind.CXX_NULL_PTR_LITERAL_EXPR: 'PtrDecl',  # Point Type
    clang.cindex.CursorKind.UNION_DECL: 'UnionDecl',  # 联合定义
    clang.cindex.CursorKind.RETURN_STMT: 'ReturnStmt',  # 返回语句
    clang.cindex.CursorKind.BREAK_STMT: 'BreakStmt',  # break 语句
    clang.cindex.CursorKind.CONTINUE_STMT: 'ContinueStmt',  # continue 语句
    clang.cindex.CursorKind.DECL_STMT: 'DeclStmt',  # 声明语句
    clang.cindex.CursorKind.UNARY_OPERATOR: 'UnaryOperator',  # 一元操作符
    clang.cindex.CursorKind.CHARACTER_LITERAL: 'CharLiteral',  # 字符常量
    clang.cindex.CursorKind.STRING_LITERAL: 'StringLiteral',  # 字符串常量
    clang.cindex.CursorKind.DECL_REF_EXPR: 'DeclRefExpr',  # 声明引用表达式
    clang.cindex.CursorKind.MEMBER_REF_EXPR: 'MemberRefExpr',  # 成员引用表达式
    clang.cindex.CursorKind.TRANSLATION_UNIT: 'TranslationUnit',  # 翻译单元
    clang.cindex.CursorKind.NAMESPACE: 'Namespace',  # 命名空间
    clang.cindex.CursorKind.TEMPLATE_TYPE_PARAMETER: 'TemplateTypeParam',  # 模板类型参数
    clang.cindex.CursorKind.TEMPLATE_NON_TYPE_PARAMETER: 'TemplateNonTypeParam',  # 模板非类型参数
    clang.cindex.CursorKind.TEMPLATE_TEMPLATE_PARAMETER: 'TemplateTemplateParam',  # 模板模板参数
    clang.cindex.CursorKind.UNEXPOSED_DECL: 'UnexpoesdDecl',  # UnexpoesedDecl
    clang.cindex.CursorKind.CXX_NEW_EXPR: 'NewOp',  # new op
    clang.cindex.CursorKind.CXX_DELETE_EXPR: 'DelOp',  # Delete op
    clang.cindex.CursorKind.CXX_STATIC_CAST_EXPR: 'Static_Cast<>',  # cast
    clang.cindex.CursorKind.CXX_BOOL_LITERAL_EXPR: 'BoolLiteral',
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


def main(directory_path, output_csv):
    # 初始化Clang索引
    clang.cindex.Config.set_library_file(r'C:\Program Files\LLVM\bin\libclang.dll')
    index = clang.cindex.Index.create()

    # 获取文件夹中的所有 .cpp 文件
    cpp_files = [f for f in os.listdir(directory_path) if f.endswith('.cpp')]
    cpp_files.sort()

    # 创建CSV文件并写入标题行
    with open(output_csv, mode='w', newline='') as file:
        writer = csv.writer(file)

        # 添加属性名称到第一行
        attributes = []
        for statement_type, value in STATEMENTS.items():
            if isinstance(value, dict):
                attributes.extend(value.values())
            else:
                attributes.append(value)
        writer.writerow(["Filename"] + attributes)

        # 依次编译和执行每个 .cpp 文件，并记录结果
        for cpp_file in cpp_files:
            file_path = os.path.join(directory_path, cpp_file)

            # 初始化计数器
            counts = defaultdict(int)

            # 解析C++文件
            translation_unit = index.parse(file_path)

            # 遍历AST并统计语句
            count_statements(translation_unit.cursor, counts)

            # 添加计数值到CSV行
            counts_row = []
            for statement_type, value in STATEMENTS.items():
                if isinstance(value, dict):
                    for key in value.values():
                        counts_row.append(counts.get(key, 0))
                else:
                    counts_row.append(counts.get(value, 0))
            writer.writerow([cpp_file] + counts_row)

    print(f"Results written to {output_csv}")


if __name__ == '__main__':
    # 设置要处理的文件夹路径和输出CSV文件路径

    directory_path = 'C:\\Users\\scnuer\\PycharmProjects\\Cost\\example_code\\CommonCode\\xx';
    # directory_path = 'F:\\vissan\\Cost\\example_code\\CommonCode'
    output_csv = 'execution_results.csv'
    main(directory_path, output_csv)
