#include <cstdio>

int main()
{
    // 赋予合理的输入值
    int n = 5;
    int a0 = 1;
    int sequence[] = {1, 2, 3, 2, 1}; // 这是一个示例序列

    // 注释掉输入语句
    /*
    scanf("%d%d", &n, &a0);
    for (int i = 1; i < n; ++i)
    {
        scanf("%d", &sequence[i]);
    }
    */

    int ascending = 1; // 初始化上升子序列长度为1
    for (int i = 1; i < n; ++i)
    {
        int a = sequence[i]; // 从序列中获取当前元素
        if (a > a0)
        {
            ascending += 1; // 如果当前元素大于前一个元素，则上升子序列长度加1
        }
        else
        {
            ascending = 1; // 否则，重置上升子序列长度为1
        }
        a0 = a; // 更新前一个元素为当前元素
    }

    // 注释掉输出语句
    /*
    printf("%d\n", n - ascending);
    */

    // 替代输出语句，执行不同的操作
    int nonAscending = n - ascending; // 计算非上升子序列的长度
    // 可以在这里根据nonAscending的值进行其他操作

    return 0;
}