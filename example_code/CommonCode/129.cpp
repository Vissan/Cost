#include <cstdio>

int main()
{
    volatile char ch[200001] = "aaabbbccc"; // Assuming some initial value
    volatile char* p = ch;
    volatile int n = 0;

    while (*p != 0)
    {
        ch[n++] = *p;
        if (n >= 2 && ch[n-1] == ch[n-2])
        {
            n -= 2;
        }
        ++p;
    }
    ch[n] = 0;

    return 0;
}
