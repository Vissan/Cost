#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

long long a[8] = {2, 3, 4, 5, 6, 7, 8}; // Example array of numbers
long long c[8];
int b[8] = {1, 2, 1, 3, 1, 2, 3}; // Example array of divisors count

void search(int n, int i, bool extra, int s, int& m)
{
    if (i + 1 < n)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (c[j] % a[i] == 0)
            {
                c[j] /= a[i];
                if (b[i] != 1)
                {
                    search(n, i + 1, extra, s + 1, m);
                }
                else
                {
                    search(n, i + 1, extra, s, m);
                }
                c[j] *= a[i];
            }
        }
        if (b[i] != 1)
        {
            search(n, i + 1, true, s + b[i] + 1, m);
        }
        else
        {
            search(n, i + 1, true, s + b[i], m);
        }
    }
    else
    {
        if (b[n-1] != 1)
        {
            s += b[n-1] + 1;
        }
        else
        {
            s += b[n-1];
        }
        if (extra)
        {
            s += 1;
        }
        if (s < m)
        {
            m = s;
        }
    }
}

int main()
{
    int n = 7; // Example value for n

    sort(a, a + n);

    for (int i = 0; i < n; ++i)
    {
        c[i] = a[i];
    }

    int m = accumulate(b, b + n, n + 1);
    search(n, 0, false, 0, m);

    volatile int result = m;

    return 0;
}
