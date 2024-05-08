// letlambda_benchmark.cpp
#include <chrono>
#include <iostream>
#include <functional> // For std::function

int main() {
    const long long numIterations = 100;  // 大量重复以获取精确的测量

    int baseValue = 42;  // 外部变量

    // 开始计时
    auto start = std::chrono::steady_clock::now();

    // 定义一个捕获外部变量的 lambda 表达式
    auto lambda = [baseValue](int x) {
        return baseValue + x;
    };

    volatile int result;
    // 多次调用 lambda 表达式
    for (long long i = 0; i < numIterations; ++i) {
        result = lambda(i);  // 执行闭包操作
    }

    // 结束计时
    auto end = std::chrono::steady_clock::now();
    std::chrono::duration<double, std::micro> totalDuration = end - start;
    std::cout << totalDuration.count() / numIterations << std::endl;
    return 0;
}

