#include <cstdio>

using namespace std;

int main()
{
    volatile int n = 5; // 人数
    volatile int m = 4; // 背心数量
    volatile int x = 1; // 最小尺寸增量
    volatile int y = 2; // 最大尺寸增量

    int a[5] = {1, 3, 5, 7, 9}; // 人的尺寸
    int b[4] = {2, 4, 6, 8};    // 背心的尺寸

    volatile int count = 0;
    for (int i = 0, j = 0; i < n && j < m; )
    {
        if (b[j] < a[i] - x)
        {
            ++j;
        }
        else if (b[j] > a[i] + y)
        {
            ++i;
        }
        else
        {
            ++count;
            ++i;
            ++j;
        }
    }

    return 0;
}
