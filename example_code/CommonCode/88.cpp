#include <cstdio>

int main()
{
    int n = 5; // Example value for n
    int a[5] = {5, 7, 3, 9, 6}; // Example array

    int count[32] = {0};
    bool b[32][32] = {false};

    for (int i = 0; i < n; ++i)
    {
        int x = a[i], index = 0, zero[32], zerocount = 0;
        while (x != 0)
        {
            if (x % 2 == 1)
            {
                count[index] += 1;
                for (int j = 0; j < zerocount; ++j)
                {
                    b[index][zero[j]] = true;
                }
            }
            else
            {
                zero[zerocount++] = index;
            }
            x /= 2;
            index += 1;
        }
    }

    int v = 31;
    for (;;)
    {
        int j = 0;
        for (; j < v; ++j)
        {
            if (!b[v][j])
            {
                break;
            }
        }
        if (j == v)
        {
            break;
        }
        --v;
    }
    int k = count[v];

    volatile int pv = 1 << v;
    for (int i = 0; i < n; ++i)
    {
        if ((a[i] & pv) != 0)
        {
            volatile int result = a[i];
        }
    }

    return 0;
}
