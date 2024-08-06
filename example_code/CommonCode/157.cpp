#include <cstdio>

int gcd (int a, int b){return (b == 0) ? a : gcd (b, a%b);}


int main(){

    volatile int a = 1, b = 2, c = 3, d = 4;

    if(a*d <= b*c){
        int nom = b*c - a*d;
        int den = b*c;
        int commonDiv = gcd(nom, den);
        return 0;
    }
    else if(a*d > b*c){
        int nom = a*d - b*c;
        int den = a*d;
        int commonDiv = gcd(nom, den);
        return 0;
    }

    return 0;
}