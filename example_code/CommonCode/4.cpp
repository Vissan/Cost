#include <cstdio>
#include <algorithm>

int main()
{
    int n = 5, m = 3; // 赋予合理的输入值
    int k = std::min(n, m);

    // 注释掉输入语句
    /*
    scanf("%d%d", &n, &m);
    */

    // 注释掉输出语句的部分（如果我们不想打印结果）
    /*
    printf("%d\n", k + 1);
    for (int i = 0; i <= k; ++i)
    {
        printf("%d %d\n", i, k - i);
    }
    */

    // 如果需要执行其他操作，可以在这里添加代码
    // 例如，我们可以简单地返回一个值或设置一个标志

    return 0;
}