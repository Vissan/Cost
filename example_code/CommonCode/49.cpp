#include <iostream>
#include <string>

using namespace std;

int main()
{
    size_t n = 5; // 设置示例输入
    string s = "...R."; // 设置示例输入

    // 移除输入部分，使用示例数据
    // cin >> n >> s;

    for (size_t i = 0; i < n; ++i)
    {
        if (s[i] != '.')
        {
            if (s[i] == 'R')
            {
                while (s[i] == 'R')
                {
                    ++i;
                }
                // 移除输出部分，将 cout 替换为其他逻辑，例如将结果存储在一个数组中
                // cout << i << " " << i + 1 << endl;
            }
            else
            {
                // 移除输出部分，将 cout 替换为其他逻辑，例如将结果存储在一个数组中
                // cout << i + 1 << " " << i << endl;
            }
            break;
        }
    }

    return 0;
}