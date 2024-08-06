#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s = "abc"; // 赋予一个合理的输入值
    string t = "ahbgdc"; // 赋予一个合理的输入值

    // 注释掉输入语句
    // cin >> s >> t;

    size_t pos = 0;
    for (size_t i = 0; i < t.length(); ++i)
    {
        if (t[i] == s[pos])
        {
            pos += 1;
        }
    }

    // 注释掉输出语句
    // cout << pos + 1 << endl;

    return 0;
}