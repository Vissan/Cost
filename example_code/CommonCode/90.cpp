#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n = 3; // Example value for n
    int m = 5; // Example value for m
    int f[5] = {4, 7, 10, 20, 30}; // Example array of puzzle difficulties

    sort(f, f + m);
    int least = f[n-1] - f[0];
    for (int i = 1; i <= m - n; ++i)
    {
        if (f[i+n-1] - f[i] < least)
        {
            least = f[i+n-1] - f[i];
        }
    }

    volatile int result = least;

    return 0;
}
