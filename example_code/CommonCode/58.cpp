#include <cstdio>
#include <cstring>

int main()
{
    char s[100001] = "ababa"; // 设置示例输入
    int a[100001] = {0}; // 初始化 a 数组
    int m = 2; // 设置示例输入
    int l = 1, r = 4; // 设置示例输入

    // 移除输入部分，使用示例数据
    // scanf("%s%d", s, &m);
    int len = strlen(s);

    a[1] = 0;
    for (int i = 1; i < len; ++i)
    {
        if (s[i] == s[i-1])
        {
            a[i+1] = a[i] + 1;
        }
        else
        {
            a[i+1] = a[i];
        }
    }

    // 移除输入部分，使用示例数据
    // while (m--)
    // {
    //     scanf("%d%d", &l, &r);
    // }

    while (m--)
    {
//        printf("%d\n", a[r] - a[l]);
        // 模拟输入，设置示例 l, r 值
        l = 2;
        r = 5;
    }

    return 0;
}