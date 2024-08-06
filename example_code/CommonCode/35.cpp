#include <iostream>
#include <string>

using namespace std;

int main()
{
    // 模拟输入
    string a = "001010";
    string b = "000110";

    bool can = false;
    if (a.length() == b.length())
    {
        size_t ia = 0, ib = 0;
        while (ia < a.length() && a[ia] == '0')
            ++ia;
        while (ib < b.length() && b[ib] == '0')
            ++ib;
        if ((ia < a.length() && ib < b.length()) || (ia == a.length() && ib == b.length()))
            can = true;
    }

    // 注意：此处没有输出，因为要求去掉输出部分
    // 正常情况下，这里可以添加一些代码来使用变量can，比如进行断言检查等

    // 为了模拟输出结果，我们可以将can的值赋给一个模拟输出变量（实际上不会输出）
    string result = (can ? "YES" : "NO");

    // 在实际使用中，您可以通过添加断言、调试输出或使用调试器来检查result的值
    return 0;
}