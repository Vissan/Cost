#include <iostream>

using namespace std;

int main()
{
    int n = 5; // Number of frames
    int a[] = {1, 2, 1, 2, 3}; // Sizes of frames

    volatile int count[101] = {0};
    for (int i = 0; i < n; ++i)
    {
        count[a[i]] += 1;
    }

    int total = 0;
    for (int i = 1; i <= 100; ++i)
    {
        total += count[i] / 2;
    }

    volatile int result = total / 2;

    // Now you can use the 'result' variable as needed in your program

    return 0;
}
