// matrix_multiplication_benchmark.cpp
#include <chrono>
#include <iostream>
#include <vector>

const int MATRIX_SIZE = 100; // 定义矩阵大小为100x100

// 初始化矩阵
std::vector<std::vector<int>> initializeMatrix(int size) {
    std::vector<std::vector<int>> matrix(size, std::vector<int>(size));
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            matrix[i][j] = i + j; // 简单初始化
        }
    }
    return matrix;
}

// 矩阵乘法
void matrixMultiply(const std::vector<std::vector<int>>& a, const std::vector<std::vector<int>>& b, std::vector<std::vector<int>>& result) {
    int size = a.size();
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < size; ++k) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    auto a = initializeMatrix(MATRIX_SIZE);
    auto b = initializeMatrix(MATRIX_SIZE);
    std::vector<std::vector<int>> result(MATRIX_SIZE, std::vector<int>(MATRIX_SIZE));

    auto start = std::chrono::high_resolution_clock::now();
    matrixMultiply(a, b, result);
    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double, std::milli> duration = end - start;
    std::cout << "Time for matrix multiplication: " << duration.count() << " milliseconds" << std::endl;

    return 0;
}
