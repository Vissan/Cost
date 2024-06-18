#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s = "heavymetalheavymetal";  // 示例输入字符串

    volatile int heavy = 0;
    volatile long long amount = 0;
    for (size_t i = 4; i < s.length(); ++i)
    {
        if (s[i] == 'l')
        {
            if (s[i-4] == 'm' && s[i-3] == 'e' && s[i-2] == 't' && s[i-1] == 'a')
            {
                amount += heavy;
            }
        }
        else if (s[i-4] == 'h' && s[i-3] == 'e' && s[i-2] == 'a' && s[i-1] == 'v' && s[i] == 'y')
        {
            ++heavy;
        }
    }

    // 结果存储在 amount 中，可以在需要的地方使用
    // 示例: 使用 amount 进行一些操作
    // ...

    return 0;
}
