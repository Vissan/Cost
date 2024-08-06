#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n = 5; // 赋予一个合理的输入值
    vector<int> sequence = {1, 2, 3, 4, 5}; // 模拟输入序列

    int x, even(0), lastodd(0), lasteven(0);

    for (int i = 0; i < n; ++i)
    {
        x = sequence[i]; // 从模拟输入序列中获取值
        if (x % 2 == 0)
        {
            even += 1;
            lasteven = i + 1; // 注意，这里i是从0开始的，但题目可能期望从1开始的索引
        }
        else
        {
            even -= 1;
            lastodd = i + 1; // 同样，调整索引以匹配题目期望
        }
    }

    // 注释掉输出语句
    // cout << (even > 0 ? lastodd : lasteven) << endl;

    return 0;
}