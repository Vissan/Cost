// function_call_benchmark.cpp
#include <chrono>
#include <iostream>

// 定义一个不会被内联的简单函数
__attribute__((noinline)) void trivialFunction() {
    
}

int main() {
    const long long numIterations = 100; // 调用函数100次以获取足够的测量精度

    // 开始计时
    auto start = std::chrono::steady_clock::now();

    for (long long i = 0; i < numIterations; ++i) {
        trivialFunction(); // 调用函数
    }

    // 结束计时
    auto end = std::chrono::steady_clock::now();
    
    // 计算总时间和单次调用时间
    std::chrono::duration<double, std::micro> totalDuration = end - start;

    std::cout << totalDuration.count() / numIterations << std::endl; // 打印出时间（毫秒）

    return 0;
}
