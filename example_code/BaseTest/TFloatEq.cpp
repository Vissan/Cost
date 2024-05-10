// floateq_benchmark.cpp
#include <chrono>
#include <iostream>

int main() {
    const long long numIterations = 1000000;
    float a = 42.0f, b = 42.0f;
    volatile bool result;

    auto start = std::chrono::steady_clock::now();

    for (long long i = 0; i < numIterations; ++i) {
        result = (a == b);
    }

    auto end = std::chrono::steady_clock::now();
    std::chrono::duration<double, std::micro> duration = end - start;
    std::cout << "Time for float equality checks: " << duration.count() << " microseconds" << std::endl;

    return 0;
}
