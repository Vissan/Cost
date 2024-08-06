#include <cstdio>

int main(){

    const double x = 0.8660254;  //cos(30 deg);

    long r = 5, h = 10;
    long s = (h + r/2) / r;
    h = h + r - r * s; s *= 2;
    if(r * x <= h){++s;}

    return 0;
}