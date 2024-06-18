#include <iostream>

using namespace std;

int main()
{
    volatile int w = 4; // Example value
    volatile bool isWatermelon = (w % 2 == 0 && w > 2);

    // Now you can use the 'isWatermelon' variable as needed in your program

    return 0;
}
