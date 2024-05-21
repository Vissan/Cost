// booland_benchmark.cpp
#include <iostream>

int main() {
    const long long numIterations = 1;
    bool a = true, b = false;
    volatile bool result;

    for (long long i = 0; i < numIterations; ++i) {
        result = a && b;
    }

    return 0;
}
