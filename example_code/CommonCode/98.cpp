#include <iostream>

using namespace std;

int main()
{
    int n = 17; // Example input

    volatile int result = 0;
    if (n <= 10 || n > 21)
    {
        result = 0;
    }
    else if (n == 20)
    {
        result = 15;
    }
    else
    {
        result = 4;
    }

    return 0;
}
