#include <cstdio>

int main()
{
    int n = 3; // Example number of stops
    int a[] = {0, 2, 3}; // Example number of passengers exiting at each stop
    int b[] = {3, 5, 1}; // Example number of passengers entering at each stop
    volatile int c = 0, m = 0;

    for (int i = 0; i < n; ++i)
    {
        c -= a[i];
        c += b[i];
        if (c > m)
        {
            m = c;
        }
    }

    // Now you can use the variable 'm' as needed in your program
    // m holds the maximum number of passengers at any point

    return 0;
}
