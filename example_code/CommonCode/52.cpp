#include <iostream>

using namespace std;

int main()
{
    volatile long long n = 27; // Example value for n

    while (n % 3 == 0)
    {
        n /= 3;
    }

    long long result = n / 3 + 1;

    // Now you can use the 'result' variable as needed in your program

    return 0;
}
