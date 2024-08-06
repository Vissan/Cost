#include <cstdio>

int main(){

    volatile long long n = 1000213;
    while(n % 3 == 0){n /= 3;}

    return 0;
}
