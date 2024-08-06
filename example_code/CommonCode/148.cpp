#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int matrix[5][5] = {
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };

    int x = 0;
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            x = matrix[i][j];
            if (x == 1)
            {
                // 注释掉输出语句
                /*
                cout << abs(i - 2) + abs(j - 2) << endl;
                */
            }
        }
    }
    return 0;
}