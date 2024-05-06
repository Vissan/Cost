#include <chrono>
#include <iostream>

int main() {
    auto start = std::chrono::steady_clock::now();

    // 空操作

    auto end = std::chrono::steady_clock::now();
    std::chrono::duration<double, std::milli> diff = end - start;
    std::cout << diff.count()  << std::endl; // 打印出时间（毫秒）

    return 0;
}
