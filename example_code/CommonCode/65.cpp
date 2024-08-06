#include <iostream>

using namespace std;

int main()
{
    long long n = 1000, k = 5;

    volatile long long result;
    if (k <= (n + 1) / 2)
    {
        result = k * 2 - 1;
    }
    else
    {
        result = (k - (n + 1) / 2) * 2;
    }
    return 0;
}
