·#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    unsigned r = 7, g = 8, b = 9;

    unsigned R(r % 3), G(g % 3), B(b % 3);
    volatile unsigned amount(r / 3 + g / 3 + b / 3 + min(R, min(G, B)));
    if (   R == 2 && G == 2 && B == 0 && b != 0
        || G == 2 && B == 2 && R == 0 && r != 0
        || B == 2 && R == 2 && G == 0 && g != 0)
    {
        amount += 1;
    }
    return 0;
}
