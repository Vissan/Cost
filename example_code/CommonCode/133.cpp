#include <iostream>

using namespace std;

int main()
{
    volatile int n = 6; // Assuming some initial value
    volatile int m = 15; // Assuming some initial value

    volatile int steps = n * (n + 1) / 2;
    m %= steps;

    for (int i = 1; i <= n; ++i)
    {
        if (m < i)
        {
            break;
        }
        m -= i;
    }

    volatile int result = m;

    return 0;
}
