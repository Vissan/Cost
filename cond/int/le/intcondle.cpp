// intcondgt_benchmark.cpp
#include <chrono>
#include <iostream>

int main() {
    const long long numIterations = 100;  // 进行一亿次迭代以确保足够的测试量

    int value1 = 42;  // 第一个比较值
    int value2 = 24;  // 第二个比较值
    volatile bool result;  // 使用volatile防止编译器优化

    // 开始计时
    auto start = std::chrono::steady_clock::now();

    // 多次执行大于比较操作
    for (long long i = 0; i < numIterations; ++i) {
        result = value1 <= value2;  // 执行大于比较操作
    }

    auto end = std::chrono::steady_clock::now();
    std::chrono::duration<double, std::micro> totalDuration = end - start;

    std::cout << totalDuration.count() / numIterations << std::endl;
    return 0;
}
