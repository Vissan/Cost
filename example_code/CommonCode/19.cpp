#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    const size_t M = 100100;
    bool prime[M];
    prime[0] = false;
    prime[1] = false;
    fill(prime + 2, prime + M, true);
    for (int i = 2; i * i < M; ++i)
    {
        if (prime[i])
        {
            for (int j = i + i; j < M; j += i)
            {
                prime[j] = false;
            }
        }
    }

    // 赋予合理的输入值
    int n = 3;
    int m = 4;
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // 注释掉输入语句
    /*
    scanf("%d%d", &n, &m);
    */

    int rows[500], cols[500];
    fill(rows, rows + n, 0);
    fill(cols, cols + m, 0);

    for (int r = 0; r < n; ++r)
    {
        for (int c = 0; c < m; ++c)
        {
            // 使用矩阵中的值代替输入
            int a = matrix[r][c];
            int x = a;
            while (!prime[x])
            {
                ++x;
            }
            rows[r] += (x - a);
            cols[c] += (x - a);
        }
    }

    int min_row = *min_element(rows, rows + n);
    int min_col = *min_element(cols, cols + m);

    // 注释掉输出语句
    /*
    printf("%d\n", min(min_row, min_col));
    */

    // 替代输出语句，执行不同的操作
    int result = min(min_row, min_col);
    // 可以在这里根据result的值进行其他操作

    return 0;
}