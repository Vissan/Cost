// letdata_benchmark.cpp
#include <chrono>
#include <iostream>

int main() {
    const long long numIterations = 1000000;
    auto start = std::chrono::steady_clock::now();

    for (long long i = 0; i < numIterations; ++i) {
        volatile int data = i;
    }

    auto end = std::chrono::steady_clock::now();
    std::chrono::duration<double, std::micro> duration = end - start;
    std::cout << "Time for variable declarations and initializations: " << duration.count() << " microseconds" << std::endl;

    return 0;
}
