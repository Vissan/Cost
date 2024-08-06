#include <cstdio>

int main()
{
    int n = 3, k = 5; // 设置示例输入
    int l = 1, r = 5, s(0); // 设置示例输入

    while (n--)
    {
        // 移除 scanf，直接使用示例数据
        // scanf("%d%d", &l, &r);
        s = (s + r - l + 1) % k;
    }

    // 移除输出部分，将 printf 替换为其他输出方式，例如 cout
    // printf("%d\n", (k - s) % k);
//    printf("%d\n", (k - s) % k);

    return 0;
}