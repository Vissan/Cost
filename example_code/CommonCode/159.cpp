#include <cstdio>

int main(){
    
    volatile long n = 10, m = 3;
    volatile long current = 7, last = 1;
    volatile long long total(0);

    total += current - last;
    if(current < last){total += n;}
    last = current;

    current = 5;
    total += current - last;
    if(current < last){total += n;}
    last = current;

    current = 9;
    total += current - last;
    if(current < last){total += n;}
    last = current;

    return 0;
}