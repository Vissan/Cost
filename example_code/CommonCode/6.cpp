#include <iostream>
#include <vector>
#include <cmath>

// 防止编译器优化
volatile long long sum;
volatile double float_sum;

void compute_sum(const std::vector<int>& numbers) {
    for (const auto& num : numbers) {
        sum += num;
    }
}

void compute_float_sum(const std::vector<double>& numbers) {
    for (const auto& num : numbers) {
        float_sum += num;
    }
}

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= std::sqrt(n); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

void simple_sort(std::vector<int>& numbers) {
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

void simple_sort_float(std::vector<double>& numbers) {
    int n = numbers.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (numbers[j] > numbers[j + 1]) {
                double temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
}

int main() {
    std::vector<int> int_numbers;
    std::vector<double> float_numbers;
    for (int i = 1; i <= 1000; ++i) {
        int_numbers.push_back(i);
        float_numbers.push_back(static_cast<double>(i) + 0.5);
    }

    sum = 0;
    float_sum = 0.0;

    // 条件语句
    if (!int_numbers.empty()) {
        compute_sum(int_numbers);
    }

    if (!float_numbers.empty()) {
        compute_float_sum(float_numbers);
    }

    // 使用范围for循环
    for (const auto& num : int_numbers) {
        if (is_prime(num)) {
            sum += num;
        }
    }

    // 使用范围for循环处理浮点数
    for (const auto& num : float_numbers) {
        float_sum += std::sqrt(num);
    }

    // 使用自定义排序
    simple_sort(int_numbers);
    simple_sort_float(float_numbers);

    return 0;
}
