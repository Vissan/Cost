// closure_benchmark.cpp
#include <chrono>
#include <iostream>
#include <vector>

int main() {
    const long long numIterations = 100;  // 大量重复以获取精确的测量
    std::vector<int> results(numIterations);

    int capture1 = 42;  // 被捕获的变量
    double capture2 = 3.14159;  // 被捕获的第二个变量

    // 定义一个捕获两个外部变量的lambda表达式
    auto lambda = [capture1, capture2](int index) -> double {
        return capture1 * index + capture2;
    };

    // 开始计时
    auto start = std::chrono::steady_clock::now();

    // 多次调用lambda表达式
    for (int i = 0; i < numIterations; ++i) {
        results[i] = lambda(i);  // 执行闭包操作
    }

    // 结束计时
    auto end = std::chrono::steady_clock::now();
    std::chrono::duration<double, std::micro> totalDuration = end - start;
    std::cout <<  totalDuration.count() / numIterations << std::endl;

    return 0;
}
