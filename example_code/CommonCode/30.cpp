#include <cstdio>

int main()
{
    int n = 5, t = 10;
    int a[] = {3, 1, 4, 1, 2};

    int j(0), time(0);
    while (j < n && time + a[j] <= t)
    {
        time += a[j++];
    }
    int maximum(j);
    for (int i = 0; i < n; ++i)
    {
        time -= a[i];
        while (j < n && time + a[j] <= t)
        {
            time += a[j++];
        }
        if (j - i - 1 > maximum)
        {
            maximum = j - i - 1;
        }
    }

    // 由于要求去掉输出语句，因此不输出任何内容
    // 但为了验证结果，可以保留下面的输出语句或使用调试器
    // printf("%d\n", maximum);

    return 0;
}