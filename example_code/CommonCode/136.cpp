#include <cstdio>

int main()
{
    volatile int n = 3; // Example number of rows
    volatile int m = 4; // Example number of columns
    volatile char c[12][13] = {
        "",
        "....",
        ".W..",
        "...."
    }; // Example map

    volatile int eaten = 0;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            if (c[i][j] == 'W')
            {
                if (c[i-1][j] == 'P' || c[i+1][j] == 'P' || c[i][j-1] == 'P' || c[i][j+1] == 'P')
                {
                    eaten += 1;
                }
            }
        }
    }

    return 0;
}
