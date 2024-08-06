#include <iostream>

using namespace std;

int GCD(int m, int n)
{
    int r;
    while ((r = m % n) != 0)
    {
        m = n;
        n = r;
    }
    return n;
}

int main()
{
    // 赋予合理的输入值
    int a = 18;
    int b = 24;
    int n = 144;

    // 注释掉输入语句
    /*
    cin >> a >> b >> n;
    */

    int winner = -1; // 用于存储获胜者的编号
    while (true)
    {
        n -= GCD(a, n);
        if (n == 0)
        {
            winner = 0; // 第一个玩家获胜
            break;
        }
        n -= GCD(b, n);
        if (n == 0)
        {
            winner = 1; // 第二个玩家获胜
            break;
        }
    }

    // 注释掉输出语句，但可以在此处执行其他操作，比如返回一个值或设置标志
    /*
    cout << winner << endl;
    */

    // 例如，我们可以根据获胜者编号执行不同的操作
    if (winner == 0)
    {
        // 第一个玩家获胜，执行相应操作
    }
    else if (winner == 1)
    {
        // 第二个玩家获胜，执行相应操作
    }

    return 0;
}