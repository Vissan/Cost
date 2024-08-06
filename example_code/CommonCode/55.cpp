#include <cstdio>

int main()
{
    int n = 5, m = 3; // 设置示例输入
    int s[100001] = {0}; // 初始化 s 数组
    // 设置示例 s 数组的值
    s[1] = 2;
    s[2] = 5;
    s[3] = 10;
    s[4] = 15;
    s[5] = 20;

    // 移除输入部分，使用示例数据
    // scanf("%d%d", &n, &m);
    // for (int i = 1; i <= n; ++i)
    // {
    //     int c, t;
    //     scanf("%d%d", &c, &t);
    //     s[i] = s[i-1] + c * t;
    // }

    int song = 1;
    // 模拟输入，设置示例 v 值
    int v = 3;
    while (m--)
    {
        // scanf("%d", &v); 
        while (v > s[song])
        {
            song += 1;
        }
//        printf("%d\n", song);
        
        v = 12; // 模拟输入下一个 v 值
    }
}