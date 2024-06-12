#include <iostream>
#include <vector>
#include <cmath>

// 防止编译器优化
volatile long long sum;
volatile double float_sum;

void simple_addition(int a, int b) {
    sum += a + b;
}

void simple_multiplication(int a, int b) {
    sum += a * b;
}

void simple_if_else(int a, int b) {
    if (a > b) {
        sum += a;
    } else {
        sum += b;
    }
}

void nested_if_else(int a, int b, int c) {
    if (a > b) {
        if (b > c) {
            sum += a;
        } else {
            sum += b;
        }
    } else {
        if (a > c) {
            sum += a;
        } else {
            sum += c;
        }
    }
}

void simple_for_loop(int n) {
    for (int i = 0; i < n; ++i) {
        sum += i;
    }
}

void simple_while_loop(int n) {
    int i = 0;
    while (i < n) {
        sum += i;
        ++i;
    }
}

void simple_do_while_loop(int n) {
    int i = 0;
    do {
        sum += i;
        ++i;
    } while (i < n);
}

void simple_vector_operations(const std::vector<int>& numbers) {
    for (const auto& num : numbers) {
        sum += num;
    }
}

void simple_float_operations(const std::vector<double>& numbers) {
    for (const auto& num : numbers) {
        float_sum += std::sqrt(num);
    }
}

void logical_operations(int a, int b) {
    if (a > 0 && b > 0) {
        sum += a + b;
    } else if (a < 0 || b < 0) {
        sum -= a + b;
    }
}

void switch_case_example(int n) {
    switch (n) {
        case 1:
            sum += 1;
            break;
        case 2:
            sum += 2;
            break;
        default:
            sum += n;
            break;
    }
}

void array_operations() {
    int arr[10];
    for (int i = 0; i < 10; ++i) {
        arr[i] = i * 2;
    }
    for (int i = 0; i < 10; ++i) {
        sum += arr[i];
    }
}

void bitwise_operations(int a, int b) {
    sum += a & b;
    sum += a | b;
    sum += a ^ b;
    sum += ~a;
}

void ternary_operator(int a, int b) {
    int max = (a > b) ? a : b;
    sum += max;
}

void simple_function_call() {
    simple_addition(10, 20);
    simple_multiplication(10, 20);
}

int main() {
    std::vector<int> int_numbers(100);
    std::vector<double> float_numbers(100);

    for (int i = 0; i < 100; ++i) {
        int_numbers[i] = i + 1;
        float_numbers[i] = static_cast<double>(i) + 0.5;
    }

    sum = 0;
    float_sum = 0.0;

    simple_addition(3, 5);
    simple_multiplication(3, 5);
    simple_if_else(5, 10);
    nested_if_else(3, 5, 7);
    simple_for_loop(10);
    simple_while_loop(10);
    simple_do_while_loop(10);
    simple_vector_operations(int_numbers);
    simple_float_operations(float_numbers);
    logical_operations(5, -3);
    switch_case_example(2);
    array_operations();
    bitwise_operations(5, 3);
    ternary_operator(10, 20);
    simple_function_call();

    return 0;
}
