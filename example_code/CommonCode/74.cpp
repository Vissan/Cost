#include <iostream>
#include <string>

using namespace std;

int main()
{
    int r = 4, c = 4; // Example values for r and c
    int row[] = {1, 0, 1, 0}; // Example row status
    int col[] = {0, 1, 0, 1}; // Example column status

    volatile int cakes = 0;
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            if (row[i] == 0 || col[j] == 0)
            {
                cakes += 1;
            }
        }
    }
    int result = cakes;

    // Now you can use the 'result' variable as needed in your program

    return 0;
}
