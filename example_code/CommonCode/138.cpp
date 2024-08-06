#include <iostream>

using namespace std;

int main()
{
    volatile int n = 2, t = 1, x = 1, y = 1, xa = 0, ya = 0, xb = 0, yb = 0;
    if (t == 1)
    {
        xa += x;
        ya += y;
    }
    else
    {
        xb += x;
        yb += y;
    }
    volatile const char* result1 = (xa >= ya ? "LIVE" : "DEAD");
    volatile const char* result2 = (xb >= yb ? "LIVE" : "DEAD");
    return 0;
}
