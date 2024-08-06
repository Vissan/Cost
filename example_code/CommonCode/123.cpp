#include <iostream>

using namespace std;

int remove0(int n)
{
    int m(0), pow(1);
    while (n != 0)
    {
        int d = n % 10;
        n /= 10;
        if (d != 0)
        {
            m += d * pow;
            pow *= 10;
        }
    }
    return m;
}

int main()
{
    volatile int a = 10203; // Assuming some initial value
    volatile int b = 304; // Assuming some initial value
    volatile int c = a + b;
    volatile int A = remove0(a);
    volatile int B = remove0(b);
    volatile int C = remove0(c);
    volatile string result = (A + B == C ? "YES" : "NO");
    return 0;
}
