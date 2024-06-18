#include <iostream>

using namespace std;

int main()
{
    int n = 5; // Example number of cookies
    int cookies[] = {1, 2, 3, 4, 5}; // Example cookie types

    int odd = 0, even = 0;
    for (int i = 0; i < n; ++i)
    {
        if (cookies[i] % 2 == 0)
        {
            even += 1;
        }
        else
        {
            odd += 1;
        }
    }

    volatile int result = (odd % 2 == 1 ? odd : even);

    // Now you can use the 'result' variable as needed in your program

    return 0;
}
