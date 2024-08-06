#include <cstdio>
#include <cstring>

char s[1000001] = "rlr"; // 赋予一个合理的输入值
int left[1000002];
int right[1000002];

int main()
{
    // 注释掉输入语句
    // scanf("%s", s);
    int n = strlen(s);

    right[0] = n + 1;
    right[n + 1] = 0;

    int l = 0, r = n + 1;
    for (int i = 1; i <= n; ++i)
    {
        right[l] = i;
        left[i] = l;

        right[i] = r;
        left[r] = i;

        switch (s[i-1])
        {
        case 'l':
            r = i;
            break;
        case 'r':
            l = i;
            break;
        default:
            break;
        }
    }

    int x = 0;
    // 注释掉输出语句
    /*
    while (n--)
    {
        x = right[x];
        printf("%d\n", x);
    }
    */

    return 0;
}