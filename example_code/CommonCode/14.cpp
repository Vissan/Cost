#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    // 初始化输入数据
    vector<int> heights = {3, 1, 4, 1, 5, 9, 2, 6}; // 赋予一个合理的输入值序列
    int n = heights.size();

    // 注释掉原始的输入语句
    /*
    scanf("%d", &n);
    */

    int time = n + n - 1;
    int h0 = 0;
    // 使用循环遍历初始化好的高度序列
    for (int h : heights)
    {
        // 注释掉原始的输入语句
        /*
        scanf("%d", &h);
        */

        time += abs(h - h0);
        h0 = h;
    }

    // 注释掉输出语句
    /*
    printf("%d\n", time);
    */

    return 0;
}