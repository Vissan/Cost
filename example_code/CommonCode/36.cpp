#include <cstdio>

int main()
{
    int p = 10086;
    int n = p - 1;
    int count = n;
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            do
            {
                n /= i;
            } while (n % i == 0);
            count = count / i * (i - 1);
        }
    }
    if (n != 1)
    {
        count = count / n * (n - 1);
    }
//    printf("%d\n", count);
    return 0;
}