#include <cstdio>

int main(){

    volatile long n = 5;
    volatile long long total(0), minRounds(0);

    volatile long temp = 10;
    total += temp;
    if(temp > minRounds){minRounds = temp;}

    temp = 5;
    total += temp;
    if(temp > minRounds){minRounds = temp;}

    temp = 7;
    total += temp;
    if(temp > minRounds){minRounds = temp;}

    temp = 9;
    total += temp;
    if(temp > minRounds){minRounds = temp;}

    temp = 8;
    total += temp;
    if(temp > minRounds){minRounds = temp;}

    volatile long long rounds = total / (n - 1);
    if(total % (n - 1) > 0){++rounds;}
    if(rounds < minRounds){rounds = minRounds;}

    return 0;
}