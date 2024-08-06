#include <iostream>

using namespace std;

int main()
{
    int n = 5, m = 2; // 设置示例输入
    int a[100+2] = {0, 1, 2, 3, 4, 5}; // 设置示例输入
    int x = 3, y = 2; // 设置示例输入

    // 移除输入部分，使用示例数据
    // cin >> n;
    // for (int i = 1; i <= n; ++i)
    // {
    //     cin >> a[i];
    // }
    // cin >> m;
    // while (m--)
    // {
    //     cin >> x >> y;
    // }

    while (m--)
    {
        a[x-1] += (y - 1);
        a[x+1] += (a[x] - y);
        a[x] = 0;
    }

    // 移除输出部分，将 cout 替换为其他逻辑，例如将结果存储在一个数组中
    // for (int i = 1; i <= n; ++i)
    // {
    //     cout << a[i] << endl;
    // }
    
    return 0;
}