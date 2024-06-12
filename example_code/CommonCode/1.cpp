#include <iostream>

// 防止编译器优化
volatile long long sum;

int main() {
    sum = 0;
    for (int i = 1; i <= 1000000; ++i) {
        sum += i;
    }
    return 0;
}
