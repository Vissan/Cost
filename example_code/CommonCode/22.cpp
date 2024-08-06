#include <iostream>

using namespace std;

int main()
{
    // 赋予合理的输入值
    int n = 3;
    int k = 10;
    int f1 = 15, t1 = 5;
    int f2 = 20, t2 = 15;
    int f3 = 10, t3 = 10;

    // 计算初始的最大快乐值
    int max_joy;
    if (t1 > k)
    {
        max_joy = f1 - (t1 - k);
    }
    else
    {
        max_joy = f1;
    }

    // 遍历剩余的n-1个朋友，更新最大快乐值
    --n; // 因为已经处理了一个朋友
    if (n > 0)
    {
        int joy;
        if (t2 > k)
        {
            joy = f2 - (t2 - k);
        }
        else
        {
            joy = f2;
        }
        if (joy > max_joy)
        {
            max_joy = joy;
        }
        --n; // 处理了一个朋友
    }
    if (n > 0)
    {
        int joy;
        if (t3 > k)
        {
            joy = f3 - (t3 - k);
        }
        else
        {
            joy = f3;
        }
        if (joy > max_joy)
        {
            max_joy = joy;
        }
    }

    // 可以在这里根据max_joy的值进行其他操作
    // 例如，将结果存储到文件、变量等以供后续使用

    // 替代输出语句的示例：将结果打印到控制台（仅作为示例，实际应去掉所有输入输出）
    // cout << max_joy << endl;

    return 0;
}