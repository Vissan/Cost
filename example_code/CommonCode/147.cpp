#include <iostream>
#include <string>

using namespace std;

int main()
{
    volatile int n = 3, k = 2; // 赋予合理的输入值
    volatile int count = 0;

    // 创建一个字符串数组来模拟输入
    string inputs[] = {"47", "744", "4"};

    // 遍历模拟的输入
    for (int i = 0; i < n; ++i)
    {
        string s = inputs[i];
        int lucky = 0;
        for (size_t j = 0; j < s.length(); ++j)
        {
            if (s[j] == '4' || s[j] == '7')
            {
                lucky += 1;
            }
        }
        if (lucky <= k)
        {
            count += 1;
        }
    }

    // 注释掉输出语句
    /*
    cout << count << endl;
    */

    return 0;
}