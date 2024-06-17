、#include <cstdio>

int main()
{
    int hh = 12; // Example initial hour
    int mm = 34; // Example initial minute

    do
    {
        ++mm;
        if (mm == 60)
        {
            ++hh;
            mm = 0;
        }
        if (hh == 24)
        {
            hh = 0;
        }
    } while (hh % 10 * 10 + hh / 10 != mm);

    // Now hh and mm contain the next palindromic time
    // You can use hh and mm as needed in your program

    return 0;
}
