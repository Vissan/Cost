#include <cstdio>

int main(){

    const int N = 10;
    volatile long quantity[N] = {0};
    volatile long occurence[N] = {0};


    volatile long paint = 100;
    volatile long minQuantity(1e6), minDigit(0);

    quantity[1] = 5;
    if(quantity[1] <= minQuantity){minQuantity = quantity[1]; minDigit = 1;}
    quantity[2] = 10;
    if(quantity[2] <= minQuantity){minQuantity = quantity[2]; minDigit = 2;}
    quantity[3] = 20;
    if(quantity[3] <= minQuantity){minQuantity = quantity[3]; minDigit = 3;}
    quantity[4] = 50;
    if(quantity[4] <= minQuantity){minQuantity = quantity[4]; minDigit = 4;}
    quantity[5] = 100;
    if(quantity[5] <= minQuantity){minQuantity = quantity[5]; minDigit = 5;}
    quantity[6] = 200;
    if(quantity[6] <= minQuantity){minQuantity = quantity[6]; minDigit = 6;}
    quantity[7] = 500;
    if(quantity[7] <= minQuantity){minQuantity = quantity[7]; minDigit = 7;}
    quantity[8] = 1000;
    if(quantity[8] <= minQuantity){minQuantity = quantity[8]; minDigit = 8;}
    quantity[9] = 2000;
    if(quantity[9] <= minQuantity){minQuantity = quantity[9]; minDigit = 9;}

    if(paint > minQuantity){

        occurence[minDigit] = paint / quantity[minDigit];
        paint %= quantity[minDigit];

        int remDigit(9);
        while(paint > 0 && remDigit > minDigit){
            long currentDiff = quantity[remDigit] - quantity[minDigit];
            occurence[remDigit] += paint / currentDiff;
            occurence[minDigit] -= paint / currentDiff;
            paint %= currentDiff;
            remDigit--;
        }


        for(int digit = N - 1; digit >= minDigit; digit--){
            for(int m = 0; m < occurence[digit]; m++){

            }
        }

    }


    return 0;
}