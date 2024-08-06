#include <cstdio>
#include <iostream>

int main(){

    volatile int n = 3;
    std::string line("abcabc");
    volatile int total(0);

    for(int k = n; k < line.size(); k += n){if(line[k - 1] == line[k - 2] && line[k-2] == line[k-3]){++total;}}

    return 0;
}