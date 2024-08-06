#include <cstdio>

int main(){

    volatile long n = 5;
    volatile int previous = 0, current = 0;
    volatile long total(0);

    current = 1;
    if(current != previous){++total;}; previous = current;

    current = 2;
    if(current != previous){++total;}; previous = current;

    current = 2;
    if(current != previous){++total;}; previous = current;

    current = 3;
    if(current != previous){++total;}; previous = current;

    current = 3;
    if(current != previous){++total;}; previous = current;

    return 0;
}