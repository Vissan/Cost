#include <iostream>

using namespace std;

int main()
{
    char s[100001] = "  \"hello, world\"   "; // 设置示例输入
    string lexeme;
    // cin.getline(s, sizeof(s) / sizeof(s[0])); // 移除输入部分
    char* p = s;
    bool quote(false);
    while (*p != 0)
    {
        if (quote)
        {
            if (*p != '\"')
            {
                lexeme.push_back(*p);
            }
            else
            {
                // 移除输出部分，将 cout 替换为其他逻辑，例如将结果存储在一个字符串数组中
                // cout << "<" << lexeme << ">" << endl;
                lexeme.clear();
                quote = false;
            }
        }
        else
        {
            if (*p == '\"')
            {
                quote = true;
            }
            else if (*p == ' ')
            {
                if (!lexeme.empty())
                {
                    // 移除输出部分，将 cout 替换为其他逻辑，例如将结果存储在一个字符串数组中
                    // cout << "<" << lexeme << ">" << endl;
                    lexeme.clear();
                }
            }
            else
            {
                lexeme.push_back(*p);
            }
        }
        ++p;
    }
    if (!lexeme.empty())
    {
        // 移除输出部分，将 cout 替换为其他逻辑，例如将结果存储在一个字符串数组中
        // cout << "<" << lexeme << ">" << endl;
    }
    return 0;
}