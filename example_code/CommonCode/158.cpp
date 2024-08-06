#include <cstdio>


long long findPower(long long base, long long exp, long long MOD){

    if(exp < 0){return -1;}
    else if(exp == 0){return 1;}
    else if(exp == 1){return base % MOD;}

    volatile long long temp = findPower(base, exp / 2, MOD);
    temp = (temp * temp) % MOD;
    if(exp % 2){return (base * temp) % MOD;}
    else{return temp % MOD;}

    return -1;

}

int main(){

    const long long M = 1000000009;
    volatile long long n = 10, m = 2, k = 3;
    volatile long long a = (n/k - n + m > 0) ? (n/k - n + m): 0;
    volatile long long t = findPower(2, a, M);

    return 0;
}