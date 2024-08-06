#include <iostream>
#include <string>

using namespace std;

int main()
{
    volatile int a = 23, b = 5, n = 3; // 赋予合理的输入值
    volatile bool exist = false;
    for (int i = 0; i < 10; ++i)
    {
        if ((a * 10 + i) % b == 0)
        {
            // 注释掉输出语句
            /*
            cout << a * 10 + i;
            string s(n - 1, '0');
            cout << s << endl;
            */
            exist = true;
            break;
        }
    }
    if (!exist)
    {
        // 注释掉输出语句
        /*
        cout << -1 << endl;
        */
    }
    return 0;
}