// funapp_benchmark.cpp
#include <chrono>
#include <iostream>

void trivialFunction() {}

int main() {
    const long long numIterations = 1000000;
    auto start = std::chrono::steady_clock::now();

    for (long long i = 0; i < numIterations; ++i) {
        trivialFunction();
    }

    auto end = std::chrono::steady_clock::now();
    std::chrono::duration<double, std::micro> duration = end - start;
    std::cout << "Time for empty function calls: " << duration.count() << " microseconds" << std::endl;

    return 0;
}
