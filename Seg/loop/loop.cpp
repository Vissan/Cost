#include <chrono>
#include <iostream>

int main() {
    const long long numIterations = 1;
    auto start = std::chrono::steady_clock::now();

    for (long long i = 0; i < numIterations; ++i) {

    }

    auto end = std::chrono::steady_clock::now();
    std::chrono::duration<double, std::micro> duration = end - start;
    std::cout <<  duration.count()  << std::endl;
    return 0;
}
