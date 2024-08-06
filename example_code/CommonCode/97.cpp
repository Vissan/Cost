#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int n = 3; // Example number of points
    int k = 10; // Example value of k

    double x0 = 0.0; // Example initial x coordinate
    double y0 = 0.0; // Example initial y coordinate
    volatile double x, y, total = 0.0;

    for (int i = 0; i < n - 1; ++i)
    {
        x = 1.0;
        y = 4.0;
        total += sqrt((x - x0) * (x - x0) + (y - y0) * (y - y0));
        x0 = x;
        y0 = y;
    }

    return 0;
}
