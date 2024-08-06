#include <cstdio>

int main(){

    volatile int n = 3, m = 2;
    volatile int correctMax(0), correctMin(100), temp(0);
    bool possible(1);

    temp = 5;
    if(temp > correctMax){correctMax = temp;}
    if(temp < correctMin){correctMin = temp;}

    temp = 10;
    if(temp > correctMax){correctMax = temp;}
    if(temp < correctMin){correctMin = temp;}

    temp = 2;
    if(temp > correctMax){correctMax = temp;}
    if(temp < correctMin){correctMin = temp;}

    temp = 11;
    if(temp <= correctMax || temp <= 2 * correctMin){possible = 0;}

    temp = 1;
    if(temp <= correctMax || temp <= 2 * correctMin){possible = 0;}

    if(correctMax < 2 * correctMin){temp = 2 * correctMin;}
    else{temp = correctMax;}

    if(possible){
        return 0;
    }
    else{
        return 0;
    }
    return 0;
}