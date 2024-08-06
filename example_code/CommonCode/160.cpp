#include <cstdio>

int gcd (int a, int b){return (b == 0) ? a : gcd (b, a%b);}

int main(){

    volatile int x = 4, y = 6;
    volatile long a = 5, b = 10;
    volatile long lcp = x * y / gcd(x, y);
    volatile long output = b/lcp - (a - 1)/ lcp;

    return 0;
}