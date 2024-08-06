#include <cstddef> // For std::size_t

void performOperationsWithInt(std::size_t iterations) {
    volatile int intVar = 0;
    while (iterations--) {
        intVar++;
    }
    // 这里没有打印语句
}

void performOperationsWithFloat(std::size_t iterations) {
    volatile float floatVar = 0.0f;
    while (iterations--) {
        floatVar += 0.5f;
    }
    // 这里没有打印语句
}

void performOperationsWithPointer(std::size_t iterations) {
    volatile int intArray[10] = {0}; // 假设有一个数组
    volatile int* ptrVar = intArray; // 指针指向数组首元素
    while (iterations--) {
        ptrVar++; // 移动指针
        // 注意：不要超出数组边界
    }
    // 这里没有打印语句，也没有使用ptrVar指向的值
}

int main() {
    performOperationsWithInt(10);
    performOperationsWithFloat(5);
    performOperationsWithPointer(3); // 注意：这里仅用于演示，实际用途有限

    return 0;
}