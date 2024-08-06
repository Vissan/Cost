#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n = 5; // 设置示例输入
    int a[100] = {1, 2, 3, 4, 5}; // 设置示例输入

    sort(a, a + n);
    int continuous(1), max_continuous(1);
    for (int i = 1; i < n; ++i)
    {
        if (a[i] == a[i-1])
        {
            continuous += 1;
            if (continuous > max_continuous)
            {
                max_continuous = continuous;
            }
        }
        else
        {
            continuous = 1;
        }
    }

    // 移除输出部分，将 cout 替换为其他逻辑，例如将结果存储在一个布尔变量中
    // cout << (max_continuous <= (n + 1) / 2 ? "YES" : "NO") << endl;
    bool isPossible = (max_continuous <= (n + 1) / 2);

    return 0;
}