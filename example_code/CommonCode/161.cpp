#include <cstdio>

int main(){

    volatile long n = 9;
    volatile long x[8] = {0};
    volatile int temp[] = {1, 2, 1, 2, 1, 4, 2, 3, 2};
    for(long k = 0; k < n; k++){++x[temp[k]];}
    if(x[5] > 0 || x[7] > 0 || x[1] != n/3 || x[2] < x[4] || x[6] != x[2] + x[3] - x[4]){
        return 0;
    }
    else{
        for(long k = 0; k < x[4]; k++){
            return 0;
        }
        for(long k = 0; k < x[2] - x[4]; k++){
            return 0;
        }
        for(long k = 0; k < x[3]; k++){
            return 0;
        }
    }

    return 0;
}