#include <iostream>

using namespace std;

int main()
{
    int n = 3, m = 4;

    volatile int result = n + m - 1;
    for (int i = 1; i <= m; ++i)
    {
        // Do something
    }
    for (int i = 2; i <= n; ++i)
    {
        // Do something
    }
}
