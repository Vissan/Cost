#include <cstdio>

int main()
{
    volatile int n = 3;
    volatile int x[101] = {0};
    for (int i = 1; i <= n; ++i)
    {
        volatile int a = i;
        x[i] = x[i-1] ^ a;
    }
    volatile int maximal = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j <= n; ++j)
        {
            volatile int xx = x[i] ^ x[j];
            if (xx > maximal)
            {
                maximal = xx;
            }
        }
    }
    return 0;
}
