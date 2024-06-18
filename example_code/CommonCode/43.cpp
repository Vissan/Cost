#include <iostream>

using namespace std;

int main()
{
    int n = 144; // Example initial value
    int state = 0;

    volatile bool magic = true;
    while (n != 0)
    {
        int d = n % 10;
        n /= 10;

        if (d == 1)
        {
            state = 0;
        }
        else if (d == 4 && state < 2)
        {
            state = state + 1;
        }
        else
        {
            magic = false;
        }
    }
    if (state != 0)
    {
        magic = false;
    }
    return 0;
}
