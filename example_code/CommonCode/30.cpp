#include <iostream>
#include <vector>
#include <cmath>
#include <string>

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

void logical_operations(int a, int b) {
    if (a > 0 && b > 0) {
        sum += a + b;
    } else if (a < 0 || b < 0) {
        sum -= a + b;
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

void logical_not_example(int a) {
    if (!a) {
        sum += 1;
    } else {
        sum -= 1;
    }
}

void simple_array_operations() {
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; ++i) {
        sum += arr[i];
    }
}

void simple_pointer_operations() {
    int a = 10;
    int *p = &a;
    sum += *p;
    *p = 20;
    sum += *p;
}

void boolean_operations(bool a, bool b) {
    if (a && b) {
        sum += 10;
    } else if (a || b) {
        sum += 5;
    } else {
        sum += 1;
    }
}

void increment_example(int& a) {
    a++;
    sum += a;
}

void decrement_example(int& a) {
    a--;
    sum += a;
}

void mixed_operations(int a, int b, int c) {
    sum += (a + b) * (c - a) / (b + 1);
}

void modulus_example(int a, int b) {
    sum += a % b;
}

void simple_recursive_function(int n) {
    if (n <= 0) return;
    sum += n;
    simple_recursive_function(n - 1);
}

void simple_vector_operations() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    for (const auto& num : vec) {
        sum += num;
    }
}

void simple_lambda_expression() {
    auto multiply = [](int a, int b) { return a * b; };
    sum += multiply(4, 5);
}

void mixed_control_flow(int a, int b, int c) {
    if (a > b) {
        sum += a;
    } else {
        for (int i = 0; i < c; ++i) {
            sum += i;
        }
    }
}

void floating_point_operations(double a, double b) {
    float_sum += a * b;
    float_sum += a / b;
    float_sum += std::sqrt(a);
    float_sum += std::pow(a, b);
}

void char_operations(char a, char b) {
    if (a > b) {
        sum += a;
    } else {
        sum += b;
    }
    sum += a + b;
}

void array_sum(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
}

void conditional_operator_example(int a, int b) {
    sum += (a > b) ? a : b;
}

void bit_shift_operations(int a, int b) {
    sum += a << b;
    sum += a >> b;
}

void simple_ternary(int a, int b) {
    int result = (a > b) ? a : b;
    sum += result;
}

void loop_with_break(int n) {
    for (int i = 0; i < n; ++i) {
        if (i == 5) {
            break;
        }
        sum += i;
    }
}

void loop_with_continue(int n) {
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            continue;
        }
        sum += i;
    }
}

void max_min_example(int a, int b) {
    int max_val = (a > b) ? a : b;
    int min_val = (a < b) ? a : b;
    sum += max_val + min_val;
}

void arithmetic_sequence_sum(int n) {
    sum += (n * (n + 1)) / 2;
}

void geometric_sequence_sum(int n, int r) {
    int current = 1;
    for (int i = 0; i < n; ++i) {
        sum += current;
        current *= r;
    }
}

void simple_max(int a, int b, int c) {
    int max_val = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    sum += max_val;
}

void fibonacci(int n) {
    int a = 0, b = 1, temp;
    for (int i = 0; i < n; ++i) {
        sum += a;
        temp = a + b;
        a = b;
        b = temp;
    }
}

void simple_comparisons(int a, int b) {
    if (a == b) {
        sum += a;
    } else if (a != b) {
        sum += b;
    }
    if (a < b) {
        sum += a;
    }
    if (a <= b) {
        sum += b;
    }
    if (a > b) {
        sum += a;
    }
    if (a >= b) {
        sum += b;
    }
}

void logical_xor(bool a, bool b) {
    if (a != b) {
        sum += 10;
    } else {
        sum += 5;
    }
}

int main() {
    sum = 0;
    float_sum = 0.0;

    simple_addition(3, 5);
    simple_multiplication(3, 5);
    simple_if_else(5, 10);
    nested_if_else(3, 5, 7);
    simple_for_loop(10);
    simple_while_loop(10);
    simple_do_while_loop(10);
    logical_operations(5, -3);
    bitwise_operations(5, 3);
    ternary_operator(10, 20);
    simple_function_call();
    complex_expression_example(3, 5, 7);
    nested_loops(10);
    multiple_conditions(3, 5, 7);
    lambda_expression_example();
    string_operations();
    logical_not_example(0);
    simple_array_operations();
    simple_pointer_operations();
    boolean_operations(true, false);
    int x = 10;
    increment_example(x);
    decrement_example(x);
    mixed_operations(3, 5, 7);
    modulus_example(10, 3);
    simple_recursive_function(5);
    simple_vector_operations();
    simple_lambda_expression();
    mixed_control_flow(3, 5, 7);
    floating_point_operations(3.5, 2.1);
    char_operations('a', 'b');
    int arr[5] = {1, 2, 3, 4, 5};
    array_sum(arr, 5);
    conditional_operator_example(5, 10);
    bit_shift_operations(4, 2);
    simple_ternary(7, 9);
    loop_with_break(10);
    loop_with_continue(10);
    max_min_example(3, 7);
    arithmetic_sequence_sum(10);
    geometric_sequence_sum(5, 2);
    simple_max(3, 5, 7);
    fibonacci(10);
    simple_comparisons(5, 10);
    logical_xor(true, false);

    return 0;
}
