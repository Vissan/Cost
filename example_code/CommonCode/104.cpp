#include <cstdio>
#include <cmath>

int main()
{
    int x = 3; // Example x coordinate
    int y = 4; // Example y coordinate
    volatile int r, r2 = x * x + y * y;

    r = floor(sqrt(static_cast<double>(r2)));
    if (r * r < r2 && (r + 1) * (r + 1) > r2 && (r % 2 == 1 && x * y > 0 || r % 2 == 0 && x * y < 0))
    {
        // Point is in a white region
    }
    else
    {
        // Point is in a black region
    }

    return 0;
}
