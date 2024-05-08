// not_benchmark.cpp
#include <chrono>
#include <iostream>

int main() {
    const long long numIterations = 100;  // 进行一亿次迭代以确保足够的测试量

    bool value = true;  // 初始布尔值
    volatile bool result;  // 使用volatile防止编译器优化

    // 开始计时
    auto start = std::chrono::steady_clock::now();

    // 多次执行NOT操作
    for (long long i = 0; i < numIterations; ++i) {
        result = !value;  // 执行布尔非操作
        value = result;   // 保证操作依赖于前一次的结果，避免优化
    }

    // 结束计时
    auto end = std::chrono::steady_clock::now();
    std::chrono::duration<double, std::micro> totalDuration = end - start;

    std::cout <<  totalDuration.count() / numIterations << std::endl;

    return 0;
}
