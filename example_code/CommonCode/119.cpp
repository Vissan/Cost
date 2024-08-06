#include <iostream>

using namespace std;

long long C(int n, int m)
{
    volatile long long result = 1;
    for (int i = 0; i < m; ++i)
    {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}

int main()
{
    int n = 5; // Example number of boys
    int m = 4; // Example number of girls
    int t = 7; // Example number of people in the theatre

    volatile long long ways = 0;
    for (int i = 4; i <= t - 1; ++i)
    {
        ways += C(n, i) * C(m, t - i);
    }

    // Now you can use the 'ways' variable as needed in your program

    return 0;
}
