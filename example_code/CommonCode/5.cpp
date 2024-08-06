#include <cstdio>

int main()
{
    int n = 100; // 赋予合理的输入值
    int amount(0);

    // 注释掉输入语句
    /*
    scanf("%d", &n);
    */

    bool b[3001] = {false};
    int pfactors[3001] = {0};
    for (int i = 2; i <= n; ++i)
    {
        if (!b[i])
        {
            for (int j = i + i; j <= n; j += i)
            {
                b[j] = true;
                pfactors[j] += 1;
            }
        }

        if (pfactors[i] == 2)
        {
            amount += 1;
        }
    }

    // 注释掉输出语句
    /*
    printf("%d\n", amount);
    */

    return 0;
}