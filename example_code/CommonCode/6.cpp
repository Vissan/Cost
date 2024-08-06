#include <iostream>

using namespace std;

int main()
{
    int t = 3; // 赋予合理的输入值，表示有3组测试数据
    int testCases[3] = {60, 120, 180}; // 初始化每组测试数据的a值

    // 注释掉输入语句
    /*
    cin >> t;
    */

    for (int i = 0; i < t; ++i)
    {
        int a = testCases[i]; // 使用数组中的值模拟输入

        // 注释掉输入语句
        /*
        cin >> a;
        */

        if (360 % (180 - a) == 0)
        {
            // 注释掉输出语句
            /*
            cout << "YES" << endl;
            */
            // 可以在这里执行其他操作，比如设置一个标志或累加计数器
        }
        else
        {
            // 注释掉输出语句
            /*
            cout << "NO" << endl;
            */
            // 同样可以在这里执行其他操作
        }
    }

    return 0;
}