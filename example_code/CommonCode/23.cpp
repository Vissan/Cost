#include <cstdio>

using namespace std;

int main()
{
    int n = 5; // Example number of integers
    int nums[] = {1, -1, 2, -2, 3}; // Example array of integers

    volatile int count[21] = {0};
    for (int i = 0; i < n; ++i)
    {
        count[nums[i] + 10] += 1;
    }

    volatile long long result = static_cast<long long>(count[10]) * static_cast<long long>(count[10] - 1) / 2;
    for (int i = 0; i < 10; ++i)
    {
        result += static_cast<long long>(count[i]) * static_cast<long long>(count[20 - i]);
    }

    // Now you can use the 'result' variable as needed in your program

    return 0;
}
