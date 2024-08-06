#include <cstdio>

int main(){

    volatile long first = 6, second = 4, third = 2;
    bool possible(0);
    for(long k = 0; k <= first; k++){
        if(k <= second && k >= first - third && second - k == third - (first - k)){
            possible = 1;

            break;
        }
    }
    if(!possible){
        return 0;
    }

    return 0;
}