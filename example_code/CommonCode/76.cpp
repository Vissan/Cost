#include <iostream>

void complexOperations() {
    volatile int intVar = 0;
    volatile long long longVar = 0;
    volatile float floatVar = 0.0f;
    volatile bool boolVar = false;
    volatile char charVar = 'A';

    for (volatile int i = 0; i < 1000000; ++i) {
        // 对int类型执行最多操作
        for (volatile int j = 0; j < 10; ++j) {
            intVar += i;
        }

        // 对long long类型执行中等操作
        longVar += i * 2LL;

        // 对float类型执行较少操作
        if (i % 100 == 0) {
            floatVar += static_cast<float>(i) / 2.0f;
        }

        // 对bool类型执行单次操作
        boolVar = !boolVar;

        // 对char类型执行单次操作
        if (i % 1000 == 0) {
            charVar = (char)((charVar - 'A' + 1) % 26 + 'A');
        }
    }
}

int main() {
    complexOperations();
    return 0;
}