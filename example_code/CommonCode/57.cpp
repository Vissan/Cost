#include <iostream>

using namespace std;

int main()
{
    int n = -100; // 设置示例输入

    // 移除输入部分，使用示例数据
    // cin >> n;

    if (n >= 0)
    {
        // 移除输出部分，将 cout 替换为其他逻辑，例如将结果存储在一个变量中
        // cout << n << endl;
    }
    else
    {
        int a = n / 10;
        int b = n / 100 * 10 + n % 10;
        // 移除输出部分，将 cout 替换为其他逻辑，例如将结果存储在一个变量中
        // cout << max(a, b) << endl;
    }

    int result = (n >= 0) ? n : max(n / 10, n / 100 * 10 + n % 10);

    return 0;
}