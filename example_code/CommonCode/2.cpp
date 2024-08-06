#include <iostream> // 实际上在这个例子中我们并不使用它

// 一个简单的函数，进行一些计算，并使用volatile来避免编译器优化
void simpleFunction() {
    volatile int intVar = 0; // int 类型
    volatile long long longVar = 0; // long long 类型
    volatile float floatVar = 0.0f; // float 类型
    volatile bool boolVar = false; // bool 类型
    volatile char charVar = 'A'; // char 类型

    for (volatile int i = 0; i < 1000000; ++i) {
        if (i % 2 == 0) {
            intVar += i;
            longVar += i * 2LL;
            floatVar += static_cast<float>(i) / 2.0f;
        } else {
            boolVar = !boolVar;
            charVar = (char)((charVar - 'A' + 1) % 26 + 'A'); // 简单地循环遍历A到Z
        }

        // 进行一些无用的运算以消耗更多CPU时间
        volatile int temp = intVar * longVar + static_cast<int>(floatVar);
    }

    // 注意：这里我们并没有使用这些变量的值，因为我们只关心执行时间
}

// 主函数
int main() {
    // 调用函数
    simpleFunction();

    // 返回0表示程序正常退出
    return 0;
}