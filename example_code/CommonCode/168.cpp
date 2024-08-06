#include <cstdio>

int gcd (int a, int b){return (b == 0) ? a : gcd (b, a%b);}

int main(){

    volatile int n = 3;
    volatile long currentGcd = 0;
    volatile long currentMax = 0;

    volatile long temp = 6;
    currentGcd = gcd(currentGcd, temp);
    if(temp > currentMax){currentMax = temp;}

    temp = 4;
    currentGcd = gcd(currentGcd, temp);
    if(temp > currentMax){currentMax = temp;}

    temp = 2;
    currentGcd = gcd(currentGcd, temp);
    if(temp > currentMax){currentMax = temp;}

    if((currentMax / currentGcd - n) % 2){
        return 0;
    }
    else{
        return 0;
    }
    return 0;
}