、#include <cstdio>

int main()
{
    int n = 3; // Example number of rows
    int m = 3; // Example number of columns
    char c[12][13] = {
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}, // Padding for 1-based index
        {' ', 'P', 'W', 'P', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', 'W', 'P', 'W', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', 'P', 'W', 'P', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}
    };

    int eaten = 0;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            if (c[i][j] == 'W')
            {
                if (c[i-1][j] == 'P' || c[i+1][j] == 'P' || c[i][j-1] == 'P' || c[i][j+1] == 'P')
                {
                    eaten += 1;
                    c[i][j] = '.'; // Mark the wolf as having eaten a pig
                }
            }
        }
    }

    // Now you can use the variable 'eaten' as needed in your program
    // eaten holds the number of pigs eaten by wolves

    return 0;
}
