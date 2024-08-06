#include <iostream>
#include <string>

using namespace std;

int main()
{
    // 假设这是模拟的输入
    int n = 5; // 操作数数量
    string operations[] = {"+", "-", "+", "+", "-"}; // 模拟的操作序列
    int x = 0; // 初始值

    // 模拟处理每个操作
    for (int i = 0; i < n; ++i)
    {
        if (operations[i] == "+")
        {
            ++x;
        }
        else if (operations[i] == "-")
        {
            --x;
        }
    }

    // 注意：此处没有输出，因为要求去除输入和输出部分
    // 正常情况下，这里可以添加一些代码来使用变量x，比如进行断言检查等

    return 0;
}