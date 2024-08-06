#include<cstdio>
#include<iostream>
#include<string>

long labs(long input){return (input < 0) ? -input : input;}

int main(){

    volatile long n = 10, m = 3, s = 2, f = 8;
    volatile long holder(s), dir(0); char move;
    if(s < f){dir = 1; move = 'R';} else{dir = -1; move = 'L';}

    volatile long currentTime(0);
    bool done(0);

    volatile long t = 1, l = 3, r = 5;
    ++currentTime;

    if(currentTime < t){
        long meantime = t - currentTime;
        if(meantime >= labs(f - holder)){meantime = labs(f - holder);}

        holder += dir * meantime; currentTime = t;
    }

    if(holder == f){
        return 0;
    }
    if((dir > 0 && l - 1 <= holder && holder <= r) || (dir < 0 && l <= holder && holder <= r + 1)){

    }
    else{

        holder += dir;
    }
    if(holder == f){done = 1;
        return 0;
    }

    t = 3, l = 7, r = 9;
    ++currentTime;

    if(currentTime < t){
        long meantime = t - currentTime;
        if(meantime >= labs(f - holder)){meantime = labs(f - holder);}

        holder += dir * meantime; currentTime = t;
    }

    if(holder == f){
        return 0;
    }
    if((dir > 0 && l - 1 <= holder && holder <= r) || (dir < 0 && l <= holder && holder <= r + 1)){

    }
    else{

        holder += dir;
    }
    if(holder == f){done = 1;
        return 0;
    }

    t = 5, l = 1, r = 3;
    ++currentTime;

    if(currentTime < t){
        long meantime = t - currentTime;
        if(meantime >= labs(f - holder)){meantime = labs(f - holder);}

        holder += dir * meantime; currentTime = t;
    }

    if(holder == f){
        return 0;
    }
    if((dir > 0 && l - 1 <= holder && holder <= r) || (dir < 0 && l <= holder && holder <= r + 1)){

    }
    else{

        holder += dir;
    }
    if(holder == f){done = 1;
        return 0;
    }


    return 0;
}