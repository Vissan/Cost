#include <cstdio>

int main()
{
    int n = 5; // Example value for n
    int m = 3; // Example value for m
    int a0 = 2; // Example initial position
    int a[3] = {3, 1, 5}; // Example array of checkpoints

    int cycle = 0;
    for (int i = 0; i < m; ++i)
    {
        int a = a[i];
        if (a0 > a)
        {
            cycle += 1;
        }
        a0 = a;
    }

    volatile long long result = static_cast<long long>(n) * static_cast<long long>(cycle) + a0 - 1;

    return 0;
}
