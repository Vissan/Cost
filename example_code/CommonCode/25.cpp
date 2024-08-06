#include <cstdio>
#include <algorithm>

using namespace std;

int a[200000], c[200001] = {0};

int main()
{
    // 赋予合理的输入值
    int n = 5;
    int q = 3;
    int inputArray[5] = {1, 3, 2, 4, 5};
    int queries[3][2] = {{1, 3}, {2, 5}, {1, 5}};

    // 模拟输入
    for (int i = 0; i < n; ++i)
    {
        a[i] = inputArray[i];
    }
    for (int i = 0; i < q; ++i)
    {
        int l = queries[i][0];
        int r = queries[i][1];
        c[l-1] += 1;
        c[r] -= 1;
    }

    // 处理c数组
    for (int i = 1; i < n; ++i)
    {
        c[i] += c[i-1];
    }

    // 排序
    sort(a, a + n);
    sort(c, c + n);

    // 计算答案
    long long answer = 0;
    for (int i = 0; i < n; ++i)
    {
        answer += static_cast<long long>(a[i]) * static_cast<long long>(c[i]);
    }

    // 可以在这里根据answer的值进行其他操作
    // 例如，将结果存储到文件、变量等以供后续使用

    // 替代输出语句的示例：将结果打印到控制台（仅作为示例，实际应去掉所有输入输出）
    // printf("%I64d\n", answer);

    return 0;
}