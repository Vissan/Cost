#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n = 5; // Example number of soldiers
    int a[] = {10, 20, 30, 40, 50}; // Example positions of soldiers

    int prev = a[0], cur, reconnaissance = 1000, index1, index2;
    for (int i = 1; i < n; ++i)
    {
        cur = a[i];
        int diff = abs(cur - prev);
        if (diff < reconnaissance)
        {
            reconnaissance = diff;
            index1 = i;
            index2 = i + 1;
        }
        prev = cur;
    }
    int diff = abs(a[0] - a[n-1]);
    if (diff < reconnaissance)
    {
        index1 = n;
        index2 = 1;
    }

    volatile int result1 = index1;
    volatile int result2 = index2;

    return 0;
}
