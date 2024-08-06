#include <iostream>
#include <string>

using namespace std;

int main()
{
    volatile int n = 5, t = 2; // 赋予合理的输入值
    string s = "GBBBG"; // 初始化字符串

    // 注释掉输入语句
    /*
    cin >> n >> t >> s;
    */

    while (t--)
    {
        for (int i = 1; i < n; ++i)
        {
            if (s[i] == 'G' && s[i-1] == 'B')
            {
                s[i] = 'B';
                s[i-1] = 'G';
                ++i;
            }
        }
    }

    // 注释掉输出语句
    /*
    cout << s << endl;
    */

    return 0;
}