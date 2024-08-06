#include <cstdio>

int main()
{
    int n = 3; // 设置示例输入
    int x[100] = {1, 3, 5}; // 设置示例输入
    int d[100] = {2, 2, 2}; // 设置示例输入
    bool spitted = false;

    // 移除输入部分，使用示例数据
    // scanf("%d", &n);
    // for (int i = 0; i < n; ++i)
    // {
    //     scanf("%d%d", &x[i], &d[i]);
    // }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            if (x[i] + d[i] == x[j] && x[j] + d[j] == x[i])
            {
                spitted = true;
                break;
            }
        }
        if (spitted)
        {
            break;
        }
    }

    // 移除输出部分，将 printf 替换为其他输出方式，例如 cout
    // printf(spitted ? "YES\n" : "NO\n");


    return 0;
}