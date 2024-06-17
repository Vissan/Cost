#include <iostream>

void variableFrequencyOperations() {
    volatile int intVar = 0;
    volatile long long longVar = 0;
    volatile float floatVar = 0.0f;
    volatile bool boolVar = false;
    volatile char charVar = 'A';

    for (volatile int i = 0; i < 1000000; ++i) {
        // 根据i的位运算结果决定处理哪种类型
        switch (i & 7) {
            case 0:
                // int类型
                intVar += i;
                break;
            case 1:
            case 2:
                // long long类型
                longVar += i * 2LL;
                break;
            case 3:
            case 4:
                // float类型
                floatVar += static_cast<float>(i) / 2.0f;
                break;
            case 5:
                // bool类型
                boolVar = !boolVar;
                break;
            case 6:
                // char类型
                charVar = (char)((charVar - 'A' + 1) % 26 + 'A');
                break;
            default:
                // 不执行任何操作
                break;
        }
    }
}

int main() {
    variableFrequencyOperations();
    return 0;
}