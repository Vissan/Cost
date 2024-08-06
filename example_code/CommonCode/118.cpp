#include <cstdio>

int main()
{
    volatile int n = 5; // Assuming n = 5
    volatile int height[1000] = {1, 2, 3, 4, 5}; // Assuming some initial values
    volatile int left[1000] = {0}, right[1000] = {0};

    for (int i = 1; i < n; ++i)
    {
        left[i] = (height[i] >= height[i-1] ? left[i-1] + 1 : 0);
    }
    for (int i = n - 2; i >= 0; --i)
    {
        right[i] = (height[i] >= height[i+1] ? right[i+1] + 1 : 0);
    }

    int maximal(0);
    for (int i = 0; i < n; ++i)
    {
        if (left[i] + right[i] + 1 > maximal)
        {
            maximal = left[i] + right[i] + 1;
        }
    }
    return 0;
}
