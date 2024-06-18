#include <cstdio>

int main()
{
    volatile int n = 2; // Example value for n

    for (int i = 0; i < n; ++i)
    {

        for (int j = 1; j < n; ++j)
        {

        }

    }

    // Prevent compiler optimization
    volatile int result = n;

    return 0;
}
