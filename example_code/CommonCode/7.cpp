#include <iostream>

void alternatingOperations() {
    volatile int intVar = 0;
    volatile long long longVar = 0;
    volatile float floatVar = 0.0f;
    volatile bool boolVar = false;
    volatile char charVar = 'A';

    for (volatile int i = 0; i < 1000000; ++i) {
        // 根据i的奇偶性来决定执行哪种类型的操作
        if (i % 2 == 0) {
            // 对int类型执行操作
            intVar += i;

            // 对float类型执行操作
            floatVar += static_cast<float>(i) / 2.0f;
        } else {
            // 对long long类型执行操作
            longVar += i * 2LL;

            // 对bool类型执行操作
            boolVar = !boolVar;

            // 对char类型执行操作
            charVar = (char)((charVar - 'A' + 1) % 26 + 'A');
        }
    }
}

int main() {
    alternatingOperations();
    return 0;
}