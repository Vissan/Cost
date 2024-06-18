#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n = 5; // Example number of items
    int m = 3; // Example number of items to be discounted
    int a[] = {-10, -20, 30, 40, -50}; // Example prices of items

    sort(a, a + n);

    int s = 0;
    for (int i = 0; i < m; ++i)
    {
        if (a[i] >= 0)
        {
            break;
        }
        s += a[i];
    }

    volatile int result = -s;

    return 0;
}
