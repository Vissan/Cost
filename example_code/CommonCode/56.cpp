#include <string>
#include <iostream>

using namespace std;

int main()
{
    int n = 2; // 设置示例输入

    // 移除输入部分，使用示例数据
    // cin >> n;

    char ch[101];
    // cin.getline(ch, 101); // 移除输入部分

    string s;
    while (n--)
    {
        // cin.getline(ch, 101); // 移除输入部分

        // 模拟输入，设置示例 s 值
        s = "miao. lala.";

        if (s.length() >= 5)
        {
            if (s.substr(s.length() - 5, 5) == "lala.")
            {
                if (s.substr(0, 5) == "miao.")
                {
                    // 移除输出部分，将 cout 替换为其他逻辑，例如将结果存储在一个字符串中
                    // cout << "OMG>.< I don't know!" << endl;
                }
                else
                {
                    // 移除输出部分，将 cout 替换为其他逻辑，例如将结果存储在一个字符串中
                    // cout << "Freda's" << endl;
                }
            }
            else
            {
                if (s.substr(0, 5) == "miao.")
                {
                    // 移除输出部分，将 cout 替换为其他逻辑，例如将结果存储在一个字符串中
                    // cout << "Rainbow's" << endl;
                }
                else
                {
                    // 移除输出部分，将 cout 替换为其他逻辑，例如将结果存储在一个字符串中
                    // cout << "OMG>.< I don't know!" << endl;
                }
            }
        }
        else
        {
            // 移除输出部分，将 cout 替换为其他逻辑，例如将结果存储在一个字符串中
            // cout << "OMG>.< I don't know!" << endl;
        }
    }
    return 0;
}