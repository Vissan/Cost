#include <iostream>
#include <vector>

// 防止编译器优化
volatile long long sum;

void compute_sum(const std::vector<int>& numbers) {
    for (const auto& num : numbers) {
        sum += num;
    }
}

int main() {
    std::vector<int> numbers;
    for (int i = 1; i <= 100; ++i) {
        numbers.push_back(i);
    }

    sum = 0;

    // 条件语句
    if (!numbers.empty()) {
        compute_sum(numbers);
    }

    // 使用while循环
    int counter = 0;
    while (counter < 10) {
        counter++;
        sum += counter;
    }

    // 使用do-while循环
    int do_counter = 0;
    do {
        do_counter++;
        sum += do_counter;
    } while (do_counter < 10);


    return 0;
}
