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
    double x, y, total = 0.0;

    for (int i = 0; i < n - 1; ++i)
    {
        // Example input for next point
        cin >> x >> y;

        total += sqrt((x - x0) * (x - x0) + (y - y0) * (y - y0));
        x0 = x;
        y0 = y;
    }

    return 0;
}
