#include <cstdio>

int main()
{
    int n = 3; // 设置示例输入
    int a[1000] = {1, 2, 3}; // 设置示例输入
    int b[1000] = {2, 3, 1}; // 设置示例输入
    int c[1001] = {0};

    // 移除输入部分，使用示例数据
    // scanf("%d", &n);
    // for (int i = 0; i < n; ++i)
    // {
    //     scanf("%d%d", &a[i], &b[i]);
    //     c[b[i]] += 1;
    // }

    for (int i = 0; i < n; ++i)
    {
        c[b[i]] += 1;
    }

    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        c[b[i]] -= 1;
        if (c[a[i]] == 0)
        {
            count += 1;
        }
        c[b[i]] += 1;
    }

    // 移除输出部分，将 printf 替换为其他输出方式，例如 cout
    // printf("%d\n", count);
//    printf("%d\n", count);

    return 0;
}