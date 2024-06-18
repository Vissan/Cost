#include <iostream>

using namespace std;

int main()
{
    long long n = 10; // Example value for n
    long long m = 7; // Example value for m
    long long k = 3; // Example value for k

    long long wrong = n - m;
    if ((wrong + 1) * (k - 1) >= m)
    {
        volatile long long result = m;
    }
    else
    {
        long long consecutive = m - wrong * (k - 1);
        long long t = consecutive / k;
        long long result = 1;
        long long pow = 2;
        long long tt = t;
        while (tt != 0)
        {
            if (tt % 2 == 1)
            {
                result *= pow;
                result %= 1000000009LL;
            }
            tt /= 2;
            pow = pow * pow % 1000000009LL;
        }
        result = ((result - 1) * 2 * k+ m - t * k) % 1000000009LL;
        volatile long long final_result = result;
    }

    return 0;
}
