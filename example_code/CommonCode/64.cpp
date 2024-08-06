#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n = 2; // Example value, you can change this to the desired value of n

    for (int row = -n; row <= n; ++row)
    {
        volatile int top = n - abs(row);
        for (int i = 0; i < abs(row); ++i)
        {

        }
        for (int i = 0; i < top; ++i)
        {

        }
        for (int i = top; i > 0; --i)
        {

        }
    }

    return 0;
}
