#include <iostream>

using namespace std;

int main()
{
    volatile int n = 3; // Example number of children
    volatile int k = 3; // Example number of orange pieces
    volatile int a[30] = {3, 8, 13}; // Example orange piece numbers

    volatile bool b[901] = {false};
    for (int i = 0; i < k; ++i)
    {
        b[a[i]] = true;
    }

    volatile int d = 0;
    for (int i = 0; i < k; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            ++d;
            while (b[d])
            {
                ++d;
            }
        }
    }

    return 0;
}
