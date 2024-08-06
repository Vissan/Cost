#include <cstdio>

int main()
{
    int n = 5; // Example value for n
    char s[5][3] = {"10", "11", "00", "10", "10"}; // Example array of magnet orientations

    int groups = 0;
    char c = '\0';
    for (int i = 0; i < n; ++i)
    {
        char s0 = s[i][0];
        if (s0 != c)
        {
            groups += 1;
        }
        c = s0;
    }

    volatile int result = groups;

    return 0;
}
