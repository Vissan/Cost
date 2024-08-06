// add_benchmark.cpp
#include <chrono>
#include <iostream>

int main() {
    const int numIterations = 10;
    volatile int sum = 1; // 使用volatile以防止编译器优化

    auto start = std::chrono::steady_clock::now();
    
    for (int i = 0; i < numIterations; ++i) {
        sum *= 2; // 执行加法操作
    }
    
    auto end = std::chrono::steady_clock::now();
    std::chrono::duration<double, std::milli> diff = end - start;
    std::cout << diff.count() / numIterations << std::endl; // 打印出时间（毫秒）

    return 0;
}
