#include <iostream>

using namespace std;

int main()
{
    volatile int n = 10; // Assuming some initial value

    volatile int result = n + n / 2;

    return 0;
}
