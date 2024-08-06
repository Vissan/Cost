#include <iostream>

using namespace std;

int main()
{
    volatile int n = 3;
    if (n > 2)
    {
        for (int i = 2; i <= n; ++i)
        {
            volatile int temp = i;
        }
        volatile int temp = 1;
    }
    else
    {
        volatile int temp = -1;
    }
    return 0;
}
