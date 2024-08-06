#include <cstdio>

using namespace std;

int bitcount(int n)
{
    n = (n & 0x55555555) + ((n >> 1) & 0x55555555);
    n = (n & 0x33333333) + ((n >> 2) & 0x33333333);
    n = (n & 0x0f0f0f0f) + ((n >> 4) & 0x0f0f0f0f);
    n = (n & 0x00ff00ff) + ((n >> 8) & 0x00ff00ff);
    n = (n & 0x0000ffff) + ((n >> 16) & 0x0000ffff);
    return n;
}

int main()
{
    // 赋予合理的输入值
    int n = 5;
    int sequence[] = {3, 6, 9, 12, 15}; // 这是一个示例序列

    int c[32] = {0};

    // 计算每个数字的二进制中1的个数，并统计每个个数的出现次数
    for (int i = 0; i < n; ++i)
    {
        int a = sequence[i];
        c[bitcount(a)] += 1;
    }

    // 计算答案
    long long answer = 0;
    for (size_t i = 0; i < sizeof(c) / sizeof(c[0]); ++i)
    {
        answer += static_cast<long long>(c[i]) * static_cast<long long>(c[i] - 1) / 2;
    }

    // 替代输出语句，执行不同的操作
    // printf("%I64d\n", answer);
    // 可以在这里根据answer的值进行其他操作
    // 例如，将答案存储到变量、文件等以供后续使用

    return 0;
}