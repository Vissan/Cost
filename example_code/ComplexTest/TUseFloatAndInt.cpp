// complex_arithmetic_benchmark.cpp
#include <chrono>
#include <iostream>
#include <cmath>

int main() {
    const long long numIterations = 1000000;
    double result = 1.0;

    auto start = std::chrono::steady_clock::now();

    for (long long i = 1; i <= numIterations; ++i) {
        result = result * sin(i) + cos(i);
    }

    auto end = std::chrono::steady_clock::now();
    std::chrono::duration<double, std::micro> duration = end - start;
    std::cout << "Time for complex arithmetic operations: " << duration.count() << " microseconds" << std::endl;

    return 0;
}
