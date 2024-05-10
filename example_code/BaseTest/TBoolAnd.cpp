// booland_benchmark.cpp
#include <chrono>
#include <iostream>

int main() {
    const long long numIterations = 1000000;
    bool a = true, b = false;
    volatile bool result;

    auto start = std::chrono::steady_clock::now();

    for (long long i = 0; i < numIterations; ++i) {
        result = a && b;
    }

    auto end = std::chrono::steady_clock::now();
    std::chrono::duration<double, std::micro> duration = end - start;
    std::cout << "Time for AND operations: " << duration.count() << " microseconds" << std::endl;

    return 0;
}
