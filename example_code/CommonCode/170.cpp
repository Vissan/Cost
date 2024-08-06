#include <cstdio>

int main(){

    volatile long n = 5;
    volatile long perm[] = {4, 3, 2, 1, 0};

    volatile long total(0);
    bool pair(0);
    for(int k = 0; k < n; k++){
        if(perm[k] == k){++total;}
        else if(perm[perm[k]] == k){pair = 1;}
    }

    if(pair){total += 2;}
    else if(total < n){++total;}


    return 0;
}