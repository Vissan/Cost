#include <cstdio>

int main()
{
    int n = 5, s = 1, t = 4; // 设置示例输入
    int p[100000+1] = {0, 2, 3, 1, 5, 4}; // 设置示例输入

    int step = 0;
    while (s != t && p[s] != 0)
    {
        int temp = p[s];
        p[s] = 0;
        s = temp;
        step += 1;
    }

    // 输出结果，将 printf 替换为其他输出方式，例如 cout
    // printf("%d\n", s == t ? step : -1);
    if (s == t) {
//        printf("%d\n", step);
    } else {
//        printf("-1\n");
    }
    return 0;
}