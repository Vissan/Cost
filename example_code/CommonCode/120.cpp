#include <iostream>

using namespace std;

int main()
{
    volatile int n = 3; // Assuming n = 3
    volatile int x, y, z, xsum(0), ysum(0), zsum(0);

    while (n--)
    {
        x = 1; // Assuming some initial values
        y = 2;
        z = 3;
        xsum += x;
        ysum += y;
        zsum += z;
    }

    if (xsum == 0 && ysum == 0 && zsum == 0)
    {
        // Some logic
    }
    else
    {
        // Some other logic
    }

    return 0;
}
