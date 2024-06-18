#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double m = 5; // Example value for m
    double R = 10; // Example value for R

    double answer = (m * (m + 1) * (m + 2) / 3 - m) * 2;
    answer += (sqrt(2.0) - 2) * ((m * m - m) + (m * m - m - (m - 1) * 2));
    answer /= (m * m);

    volatile double result = answer * R;

    return 0;
}
