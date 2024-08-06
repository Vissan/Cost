#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    // 赋予合理的输入值
    int n = 5;
    int distances[6] = {0, 2, 3, 1, 4, 2}; // 第一个元素是哑元，用于方便计算
    int s = 2, t = 5;

    // 模拟输入并计算前缀和
    for (int i = 2; i < n + 2; ++i)
    {
        distances[i] = distances[i-1] + distances[i];
    }

    // 如果s大于t，则交换它们
    if (s > t)
    {
        swap(s, t);
    }

    // 计算距离
    int distance = distances[t] - distances[s];
    int totalDistance = distances[n+1];
    int minDistance = min(distance, (totalDistance - distance));

    // 可以在这里根据minDistance的值进行其他操作
    // 例如，将结果存储到文件、变量等以供后续使用

    // 替代输出语句的示例：将结果打印到控制台（仅作为示例，实际应去掉所有输入输出）
    // cout << minDistance << endl;

    return 0;
}