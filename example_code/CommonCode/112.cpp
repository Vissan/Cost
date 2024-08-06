#include <iostream>

void dataTypeSpecificOperations() {
    volatile int intVar = 0;
    volatile long long longVar = 0;
    volatile float floatVar = 0.0f;
    volatile double doubleVar = 0.0; // 引入double类型
    volatile bool boolVar = false;
    volatile char charVar = 'A';

    for (volatile int i = 0; i < 1000000; ++i) {
        // 优先处理double类型
        if (i % 100 == 0) {
            doubleVar += i;
        }

        // 然后是float类型
        if (i % 10 == 0) {
            floatVar += static_cast<float>(i) / 2.0f;
        }

        // 接着是long long类型
        if (i % 5 == 0) {
            longVar += i * 2LL;
        }

        // 然后是int类型
        intVar += i;

        // bool和char类型处理频率最低
        if (i % 1000 == 0) {
            boolVar = !boolVar;
            charVar = (char)((charVar - 'A' + 1) % 26 + 'A');
        }
    }
}

int main() {
    dataTypeSpecificOperations();
    return 0;
}