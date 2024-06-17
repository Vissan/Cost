】#include <iostream>

using namespace std;

int main()
{
    int k = 3; // Example initial value of k
    int l = 27; // Example initial value of l
    int importance = -1;

    while (l % k == 0)
    {
        l /= k;
        importance += 1;
    }

    bool result = (importance >= 0 && l == 1);

    // Now you can use the result and importance variables as needed in your program
    // result will be true if the condition is met, false otherwise
    // importance will hold the number of times l can be divided by k

    return 0;
}
