#include <iostream>
#include <string>
#include <numeric>

using namespace std;

int main()
{
    string s = "A?BCDEFGHIJK"; // 示例字符串输入

    int letter[128] = {0}, zero = 0;
    for (size_t i = 0; i < s.length(); ++i)
    {
        if (s[i] >= 'A' && s[i] < 'K')
        {
            letter[s[i]] = 1;
        }
        else if (s[i] == '?')
        {
            zero += 1;
        }
    }

    volatile int result = 1;
    int lettercount = accumulate(letter + 'A', letter + 'K', 0);
    if (lettercount > 0)
    {
        if (s[0] >= 'A' && s[0] < 'K')
        {
            result *= 9;
        }
        else
        {
            result *= 10;
        }
    }
    for (int i = 1; i < lettercount; ++i)
    {
        result *= (10 - i);
    }

    if (zero > 0 && s[0] == '?')
    {
        result *= 9;
        zero -= 1;
    }

    string padding(zero, '0');
    string output = to_string(result) + padding;
    // 示例输出
    // cout << output << endl;

    return 0;
}
