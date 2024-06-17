#include <iostream>
// 带有volatile关键字的测试代码，避免编译器优化

// 一个简单的函数，进行一些计算
void simpleFunction() {
    volatile int x = 0; // 使用volatile关键字
    for (volatile int i = 0; i < 1000000; ++i) { // 使用volatile关键字
        x += i; // 模拟一些工作
    }
    // 注意：这里我们并没有使用x的值，因为我们只关心执行时间
    // 但由于x和i都是volatile，编译器不会优化掉这个循环
}

// 主函数
int main() {
    // 调用函数
    simpleFunction();

    // 注意：这里没有其他代码，除了函数调用

    return 0;
}