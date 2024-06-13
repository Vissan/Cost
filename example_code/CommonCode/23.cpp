#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <map>
#include <set>
#include <utility>
#include <deque>
#include <list>

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

void for_each_example(const std::vector<int>& numbers) {
    for (const auto& num : numbers) {
        sum += num;
    }
}

void complex_expression_example(int a, int b, int c) {
    sum += a * b + c - (a / b) * c;
}

void nested_loops(int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            sum += i * j;
        }
    }
}

void multiple_conditions(int a, int b, int c) {
    if (a > b && b > c) {
        sum += a;
    } else if (a == b || b == c) {
        sum += b;
    } else {
        sum += c;
    }
}

void lambda_expression_example() {
    auto add = [](int a, int b) { return a + b; };
    sum += add(5, 3);
}

void string_operations() {
    std::string str = "Hello";
    str += " World";
    sum += str.length();
}

void exception_handling_example(int a, int b) {
    try {
        if (b == 0) throw std::runtime_error("Division by zero");
        sum += a / b;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}

void map_operations() {
    std::map<int, int> my_map;
    for (int i = 0; i < 10; ++i) {
        my_map[i] = i * 2;
    }
    for (const auto& pair : my_map) {
        sum += pair.second;
    }
}

void set_operations() {
    std::set<int> my_set = {1, 2, 3, 4, 5};
    for (const auto& elem : my_set) {
        sum += elem;
    }
}

void pair_operations() {
    std::pair<int, int> my_pair = {3, 4};
    sum += my_pair.first + my_pair.second;
}

void deque_operations() {
    std::deque<int> dq;
    for (int i = 0; i < 10; ++i) {
        dq.push_back(i);
    }
    for (const auto& elem : dq) {
        sum += elem;
    }
}

void list_operations() {
    std::list<int> lst;
    for (int i = 0; i < 10; ++i) {
        lst.push_back(i);
    }
    for (const auto& elem : lst) {
        sum += elem;
    }
}

void logical_not_example(int a) {
    if (!a) {
        sum += 1;
    } else {
        sum -= 1;
    }
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
    for_each_example(int_numbers);
    complex_expression_example(3, 5, 7);
    nested_loops(10);
    multiple_conditions(3, 5, 7);
    lambda_expression_example();
    string_operations();
    exception_handling_example(10, 0);
    map_operations();
    set_operations();
    pair_operations();
    deque_operations();
    list_operations();
    logical_not_example(0);

    return 0;
}
