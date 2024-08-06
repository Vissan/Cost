#include <iostream>

using namespace std;

bool lucky(int n)
{
    while (n != 0)
    {
        if (n % 10 != 4 && n % 10 != 7)
        {
            return false;
        }
        n /= 10;
    }
    return true;
}

bool almost_lucky(int n)
{
    if (lucky(n))
    {
        return true;
    }

    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0 && (lucky(i) || lucky(n / i)))
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int n = 12; // 设置示例输入

    // 移除输出部分，将 if-else 语句替换为其他逻辑
    // if (almost_lucky(n)) {
    //     cout << "YES" << endl;
    // } else {
    //     cout << "NO" << endl;
    // }

    // 例如，可以将结果存储在一个布尔变量中
    bool isLucky = almost_lucky(n);

    return 0;
}