#include <iostream>

using namespace std;

bool isprime(int n)
{
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    volatile int n = 5; // Assuming some initial value
    volatile int m = 7; // Assuming some initial value

    volatile int next = n + 1;
    while (!isprime(next))
    {
        next += 1;
    }

    volatile string result = (next == m ? "YES" : "NO");

    return 0;
}
