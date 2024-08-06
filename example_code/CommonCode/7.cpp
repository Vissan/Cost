#include <cstdio>

int main() {
    // 赋予一个合理的输入值，比如 "12345"
    char digits[] = "12345";

    int times = 0;
    if (digits[0] != '0' || digits[1] != '0') { // 修改判断条件，确保即使是个位数也能正确处理
        int digitsum = 0;
        char* p = digits;
        while (*p != '\0') {
            digitsum += (*p - '0');
            ++p;
        }
        ++times;

        while (digitsum > 9) {
            int m = digitsum;
            digitsum = 0;
            while (m != 0) {
                digitsum += m % 10;
                m /= 10;
            }
            ++times;
        }
    }

    // 原本的输出语句已被注释掉，因为要求去掉输出
    // printf("%d\n", times);

    return 0;
}