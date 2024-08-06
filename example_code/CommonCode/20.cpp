#include <iostream>

using namespace std;

int main()
{
    // 赋予合理的输入值
    int n = 5;
    int friends[] = {3, 4, 2, 1, 5}; // 这是一个示例朋友数量数组

    int total = 0;
    int answer = 0;

    // 计算朋友总数
    for (int i = 0; i < n; ++i)
    {
        total += friends[i];
    }

    // 计算答案
    for (int i = 1; i <= 5; ++i)
    {
        if ((total + i) % (n + 1) != 1)
        {
            answer += 1;
        }
    }

    // 替代输出语句，执行不同的操作
    // cout << answer << endl;
    // 可以在这里根据answer的值进行其他操作
    // 例如，将答案打印到控制台（仅作为示例，实际应去掉所有输入输出）
    // 或者将答案存储到文件、变量等以供后续使用

    return 0;
}