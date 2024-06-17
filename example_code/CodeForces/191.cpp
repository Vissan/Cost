#include <iostream>

using namespace std;

int main()
{
    int n = 5; // Example total number of positions
    int a = 2; // Example position of the leftmost soldier
    int b = 3; // Example position of the rightmost soldier

    int result = min(n - a, b + 1);

    // Now you can use the 'result' variable as needed in your program

    return 0;
}
