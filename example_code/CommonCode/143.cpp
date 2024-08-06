#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    volatile int n = 5; // 赋予一个合理的输入值
    volatile int speed[101] = {0, 2, 3, 1, 5, 4}; // 初始化速度数组
    volatile int ram[101] = {0, 4, 2, 3, 1, 6}; // 初始化内存数组
    volatile int hdd[101] = {0, 500, 600, 300, 800, 700}; // 初始化硬盘数组
    volatile int cost[101] = {0, 300, 400, 250, 500, 450}; // 初始化价格数组

    // 注释掉原始的输入语句
    /*
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
    {
        scanf("%d%d%d%d", &speed[i], &ram[i], &hdd[i], &cost[i]);
    }
    */

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (speed[i] < speed[j] && ram[i] < ram[j] && hdd[i] < hdd[j])
            {
                cost[i] = 1001; // 100 <= cost <= 1000
            }
        }
    }

    // 注释掉输出语句
    /*
    printf("%u\n", min_element(cost + 1, cost + 1 + n) - cost);
    */

    return 0;
}