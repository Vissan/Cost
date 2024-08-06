#include <cstdio>

int main()
{
    // 直接在代码中填入合理的输入值
    char digits[] = "12345"; // 假设输入为 "12345"

    volatile int times = 0;
    if (digits[0] != '0') // 注意这里应该检查 digits[0] 而不是 digits[1]，因为数组索引从0开始
    {
        int digitsum = 0;
        char* p = digits;
        while (*p != '\0') // 注意字符串结束符是 '\0' 而不是 0
        {
            digitsum += (*p - '0');
            ++p;
        }
        ++times;

        while (digitsum > 9)
        {
            int m = digitsum;
            digitsum = 0;
            while (m != 0)
            {
                digitsum += m % 10;
                m /= 10;
            }
            ++times;
        }
    }

    // 注意：这里我们不再输出 times，因为题目要求去掉输出部分

    return 0;
}