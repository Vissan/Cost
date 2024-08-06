#include <cstdio>

int main(){

    volatile long n = 4;
    volatile long bills[3] = {0}; //Not necessary to keep track of hundred bills;
    bool possible(1);

    volatile int temp = 25;
    if(temp == 25){++bills[0];}
    else if(temp == 50){--bills[0]; ++bills[1];}
    else if(temp == 100){
        ++bills[2];
        if(bills[1] > 0){--bills[1]; --bills[0];}
        else{bills[0] -= 3;}
    }
    if(bills[0] < 0){possible = 0;
        return 0;
    }

    temp = 25;
    if(temp == 25){++bills[0];}
    else if(temp == 50){--bills[0]; ++bills[1];}
    else if(temp == 100){
        ++bills[2];
        if(bills[1] > 0){--bills[1]; --bills[0];}
        else{bills[0] -= 3;}
    }
    if(bills[0] < 0){possible = 0;
        return 0;
    }

    temp = 50;
    if(temp == 25){++bills[0];}
    else if(temp == 50){--bills[0]; ++bills[1];}
    else if(temp == 100){
        ++bills[2];
        if(bills[1] > 0){--bills[1]; --bills[0];}
        else{bills[0] -= 3;}
    }
    if(bills[0] < 0){possible = 0;
        return 0;
    }

    temp = 100;
    if(temp == 25){++bills[0];}
    else if(temp == 50){--bills[0]; ++bills[1];}
    else if(temp == 100){
        ++bills[2];
        if(bills[1] > 0){--bills[1]; --bills[0];}
        else{bills[0] -= 3;}
    }
    if(bills[0] < 0){possible = 0;
        return 0;
    }

    if(possible){
        return 0;
    }
    else{
        return 0;
    }

    return 0;
}