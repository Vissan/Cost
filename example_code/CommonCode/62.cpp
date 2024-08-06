#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long x = -10; // 示例初始值
    long long y = 20;  // 示例初始值
    long long m = 50;  // 示例目标值

    volatile long long result = 0;

    if (x >= m || y >= m)
    {
        result = 0;
    }
    else
    {
        if (x <= 0 && y <= 0)
        {
            result = -1;
        }
        else
        {
            if (x < y)
            {
                swap(x, y);
            }
            if (y < 0)
            {
                long long n = (-y) / x + 1;
                result += n;
                y += x * n;
            }
            while (x < m)
            {
                y += x;
                swap(x, y);
                result += 1;
            }
        }
    }

    // 示例输出
    // cout << result << endl;

    return 0;
}
