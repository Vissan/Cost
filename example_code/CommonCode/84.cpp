#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x = 1; // Example value for x
    int y = -2; // Example value for y

    if (x > 0)
    {
        if (y > 0)
        {
            volatile int result1 = 0;
            volatile int result2 = x + y;
            volatile int result3 = x + y;
            volatile int result4 = 0;
        }
        else
        {
            volatile int result1 = 0;
            volatile int result2 = y - x;
            volatile int result3 = x - y;
            volatile int result4 = 0;
        }
    }
    else
    {
        if (y > 0)
        {
            volatile int result1 = x - y;
            volatile int result2 = 0;
            volatile int result3 = 0;
            volatile int result4 = y - x;
        }
        else
        {
            volatile int result1 = x + y;
            volatile int result2 = 0;
            volatile int result3 = 0;
            volatile int result4 = x + y;
        }
    }

    return 0;
}
