#include <cstdio>

int main()
{
    volatile int n = 30; // Example input number

    while (n != 1)
    {
        for (int i = 2; i <= n; ++i)
        {
            if (n % i == 0)
            {
                n /= i;
                break;
            }
        }
    }

    return 0;
}
