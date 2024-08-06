#include <cstdio>

int main()
{
    int n = 4; // 设置示例输入
    int a = 0, b = 0, c(0), m(0); // 设置示例输入

    // 移除输入部分，使用示例数据
    // scanf("%d", &n);
    // while (n--)
    // {
    //     scanf("%d%d", &a, &b);
    // }

    while (n--)
    {
        // 移除 scanf，使用示例数据
        // scanf("%d%d", &a, &b); 
        c -= a;
        c += b;
        if (c > m)
        {
            m = c;
        }
    }

    // 移除输出部分，将 printf 替换为其他输出方式，例如 cout
    // printf("%d\n", m);
//    printf("%d\n", m);

    return 0;
}