// and_benchmark.cpp
#include <chrono>
#include <iostream>

int main() {
    const long long numIterations = 100;  // 进行一亿次迭代以确保足够的测试量

    bool value1 = true;  // 第一个初始布尔值
    bool value2 = false; // 第二个初始布尔值
    volatile bool result;  // 使用volatile防止编译器优化

    // 开始计时
    auto start = std::chrono::steady_clock::now();

    // 多次执行AND操作
    for (long long i = 0; i < numIterations; ++i) {
        result = value1 && value2;  // 执行布尔AND操作
        value2 = !value2;   // 改变value2的值以模拟变化的输入
    }

    // 结束计时
    auto end = std::chrono::steady_clock::now();
    std::chrono::duration<double, std::micro> totalDuration = end - start;

    std::cout << totalDuration.count() / numIterations << std::endl;

    return 0;
}
