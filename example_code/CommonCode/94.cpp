#include <iostream>

using namespace std;

int main()
{
    // 直接在代码中填入合理的输入值
    volatile int n = 17; // 假设输入值为17

    // 移除了所有的cout语句，因为要求去掉输出部分

    // 以下是原代码的逻辑部分，但未使用任何输出
    if (n <= 10 || n > 21)
    {
        // cout << 0 << endl; // 这行已被移除
    }
    else if (n == 20)
    {
        // cout << 15 << endl; // 这行已被移除
    }
    else
    {
        // cout << 4 << endl; // 这行已被移除
    }

    // 注意：由于移除了所有输出，这里实际上不会显示任何结果
    return 0;
}