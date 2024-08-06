#include <iostream>

using namespace std;

int main()
{
    int n = 5;
    int a[] = {1, 0, 1, 0, 1};
    volatile int count1 = 0, extra0 = 0, extra0max = -1;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] == 1)
        {
            count1 += 1;
            if (extra0 > 0)
            {
                extra0 -= 1;
            }
        }
        else
        {
            extra0 += 1;
            if (extra0 > extra0max)
            {
                extra0max = extra0;
            }
        }
    }
    volatile int result = count1 + extra0max;
    return 0;
}
