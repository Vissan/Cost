#include <cstdio>

int main(){

    volatile long long a = 10, b = 5;
    volatile long long total(0);

    while(a > 0 && b > 0){
        if(a >= b){total += (a / b); a %= b;}
        else{total += (b / a); b %= a;}
    }


    return 0;
}