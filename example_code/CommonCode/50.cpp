#include <cstdio>

int main()
{
    int n = 5, m = 3; // Example values for n and m
    int a[] = {1, 2, 3}; // Example values for a
    int b[] = {2, 3, 4}; // Example values for b

    bool fire[1001] = {false};
    for (int i = 0; i < m; ++i)
    {
        fire[a[i]] = true;
        fire[b[i]] = true;
    }

    int x = 1;
    while (fire[x])
    {
        x++;
    }

    volatile int roads = n - 1;
    for (int i = 1; i < x; ++i)
    {
        // Do something
    }
    for (int i = x + 1; i <= n; ++i)
    {
        // Do something
    }

    volatile int result = roads;

    // Now you can use the 'result' variable as needed in your program

    return 0;
}
