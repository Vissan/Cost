#include <cstdio>

int main()
{
    volatile int n = 3;
    volatile int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        volatile int a = i;
        sum += a;
    }
    volatile int result = (sum % n == 0 ? n : n - 1);
    return 0;
}
