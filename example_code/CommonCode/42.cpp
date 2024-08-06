#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int n = 5; // 设置示例输入
    int a[300000] = {2, 1, 4, 5, 3}; // 设置示例输入

    sort(a, a + n);

    long long result(0);
    for (int i = 0; i < n; ++i)
    {
        result += abs(i + 1 - a[i]);
    }

    // 移除输出部分，将 printf 替换为其他输出方式，例如 cout
    // printf("%I64d", result);
//    printf("%lld\n", result);

    return 0;
}