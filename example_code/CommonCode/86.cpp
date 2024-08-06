#include <iostream>

using namespace std;

int main()
{
    volatile int n = 6;
    volatile int a, b, c, chest = 0, biceps = 0, back = 0;
    for (int i = 0; i < n / 3; ++i)
    {
        volatile int temp = i;
        chest += temp;
        biceps += temp;
        back += temp;
    }
    if (n % 3 == 1)
    {
        volatile int temp = 1;
        chest += temp;
    }
    else if (n % 3 == 2)
    {
        volatile int temp = 1;
        chest += temp;
        biceps += temp;
    }
    volatile const char* result = (chest > biceps && chest > back) ? "chest" : ((biceps > back && biceps > chest) ? "biceps" : "back");

    return 0;
}
