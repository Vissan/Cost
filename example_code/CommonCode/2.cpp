#include <iostream> // 实际上在这个例子中我们并不使用它，但为了完整性还是包含了

// 一个简单的函数，进行一些计算，并使用volatile来避免编译器优化
void simpleFunction() {
    volatile int x = 0; // 使用volatile关键字
    volatile int y = 10; // 另一个volatile变量
    for (volatile int i = 0; i < 1000000; ++i) { // 使用volatile关键字
        if (i % 2 == 0) { // 条件判断，如果i是偶数
            x += i; // 模拟一些工作
        } else {
            y += i; // 如果i是奇数，则对y进行操作
        }
    }

}

// 主函数
int main() {
    // 调用函数
    simpleFunction();

    return 0;
}