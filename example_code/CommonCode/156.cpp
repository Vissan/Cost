#include <cstdio>

int main(){

    volatile long x = 1, y = 2;
    if     (x > 0 && y > 0){
        return 0;
    }
    else if(x < 0 && y > 0){
        return 0;
    }
    else if(x < 0 && y < 0){
        return 0;
    }
    else if(x > 0 && y < 0){
        return 0;
    }
    return 0;
}