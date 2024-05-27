#include <iostream> // 仅在需要查看结果时包含

// 定义一个函数，用于计算两个整数的和
int add(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 5;
    int num2 = 10;
    int result;

    // 调用函数并将结果存储在变量result中
    result = add(num1, num2);

    // 注意：这里没有使用cout或其他输出语句来显示result的值

    return 0;
}