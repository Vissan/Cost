#include <iostream>
#include <vector>
#include <cmath>

// 防止编译器优化
volatile long long sum;

void compute_sum(const std::vector<int>& numbers) {
    for (const auto& num : numbers) {
        sum += num;
    }
}

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= std::sqrt(n); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

void bubble_sort(std::vector<int>& numbers) {
    int n = numbers.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
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

    // 使用范围for循环
    for (const auto& num : numbers) {
        if (is_prime(num)) {
            sum += num;
        }
    }

    // 使用自定义冒泡排序
    bubble_sort(numbers);

    return 0;
}
