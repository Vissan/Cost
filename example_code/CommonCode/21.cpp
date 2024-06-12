#include <iostream>
#include <vector>
#include <cmath>
#include <string>

// 防止编译器优化
volatile long long sum;
volatile double float_sum;


void array_sum(const int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
}

void matrix_operations() {
    int matrix[3][3];
    int counter = 1;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            matrix[i][j] = counter++;
        }
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            sum += matrix[i][j];
        }
    }
}

void boolean_operations(bool a, bool b) {
    if (a && b) {
        sum += 1;
    } else if (a || b) {
        sum += 2;
    } else {
        sum += 3;
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


    int a = 10, b = 20;

    int arr[5] = {1, 2, 3, 4, 5};
    array_sum(arr, 5);

    matrix_operations();
    boolean_operations(true, false);

    return 0;
}
