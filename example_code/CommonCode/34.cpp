#include <cstdio>

int main()
{
    int n = 5; // 数组大小
    int m = 3; // 操作次数
    int a[100001] = {0, 10, 20, 30, 40, 50}; // 初始化数组
    int t[] = {1, 2, 3}; // 操作类型
    int v[] = {2, 0, 3}; // 操作值v
    int x[] = {15, 0, 0}; // 操作值x
    int y[] = {0, 5, 0}; // 操作值y
    int q[] = {0, 0, 4}; // 查询值q

    int increase = 0;

    for (int i = 0; i < m; ++i)
    {
        switch (t[i])
        {
        case 1:
            a[v[i]] = x[i] - increase;
            break;

        case 2:
            increase += y[i];
            break;

        case 3:
            // 模拟输出
            volatile int result = a[q[i]] + increase;
            break;

        default:
            break;
        }
    }

    return 0;
}
