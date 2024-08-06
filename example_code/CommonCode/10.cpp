#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n = 5; // 赋予一个合理的输入值

    // 注释掉输入语句
    // cin >> n;

    for (int row = -n; row <= n; ++row)
    {
        int top = n - abs(row);
        // 注释掉输出空格的语句
        /*
        for (int i = 0; i < abs(row); ++i)
        {
            cout << "  ";
        }
        */
        // 注释掉输出数字的语句
        /*
        for (int i = 0; i < top; ++i)
        {
            cout << i << " ";
        }
        for (int i = top; i > 0; --i)
        {
            cout << i << " ";
        }
        cout << 0 << endl;
        */
    }
    return 0;
}