#include <cstdio>

int main(){

    volatile int n = 194;
    volatile int p = 0;
    for(int s = 0; s < n; s++){
        for(int k = 0; k < n; k++){
            p = n * k + (k + s)% n + 1;
        }
    }
    return 0;
}
