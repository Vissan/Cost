// letdata_benchmark.cpp
#include <chrono>
#include <iostream>

int main() {
    const long long numIterations = 100;  // 进行一亿次迭代以确保足够的测试量

    // 开始计时
    auto start = std::chrono::steady_clock::now();

    // 多次执行变量声明和初始化操作
    for (long long i = 0; i < numIterations; ++i) {
        volatile int value = i;  // 声明并初始化变量
    }

    // 结束计时
    auto end = std::chrono::steady_clock::now();
    std::chrono::duration<double, std::micro> totalDuration = end - start;

    std::cout <<  totalDuration.count() / numIterations << std::endl;

    return 0;
}
