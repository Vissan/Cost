#include <iostream>

using namespace std;

int main()
{
    int n = 5;  // 示例值，可以根据需要更改
    int a[101] = {0, 1, 2, 3, 4, 5};  // 示例数组值，索引从1开始

    bool found = false;
    volatile int result_i = -1, result_j = -1, result_k = -1;

    for (int i = 1; !found && i <= n; ++i)
    {
        for (int j = 1; !found && j <= n; ++j)
        {
            if (j != i)
            {
                for (int k = j + 1; k <= n; ++k)
                {
                    if (k != i && a[i] == a[j] + a[k])
                    {
                        result_i = i;
                        result_j = j;
                        result_k = k;
                        found = true;
                        break;
                    }
                }
            }
        }
    }

    // 结果存储在 result_i, result_j, result_k 中，可以在需要的地方使用
    // 示例: 使用 result_i, result_j, result_k 进行一些操作
    // ...

    if (!found)
    {
        result_i = -1;  // 表示没有找到符合条件的结果
    }

    return 0;
}
