、#include <iostream>

using namespace std;

int main()
{
    long long n = 447774; // Example initial number
    int count = 0;

    while (n != 0)
    {
        if (n % 10 == 4 || n % 10 == 7)
        {
            count += 1;
        }
        n /= 10;
    }

    bool isNearlyLucky = (count == 4 || count == 7);

    // Now you can use isNearlyLucky as needed in your program

    return 0;
}
