#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int n = 5, m = 3; // 设置示例输入
    int a, l, r, c(0), d(0); // 设置示例输入
    int arr[] = {1, 1, 0, 0, 1}; // 设置示例输入

    // 移除输入部分，使用示例数据
    // scanf("%d%d", &n, &m);
    // while (n--)
    // {
    //     scanf("%d", &a);
    // }

    for (int i = 0; i < n; i++) {
        a = arr[i];
        if (a == 1)
        {
            c += 1;
        }
        else
        {
            d += 1;
        }
    }

    int up = min(c, d) * 2;

    // 移除输入部分，使用示例数据
    // while (m--)
    // {
    //     scanf("%d%d", &l, &r);
    // }

    // 模拟输入，设置示例 l, r 值
    l = 1;
    r = 3;
//    printf((r - l) % 2 == 1 && r - l < up ? "1\n" : "0\n");

    l = 2;
    r = 5;
//    printf((r - l) % 2 == 1 && r - l < up ? "1\n" : "0\n");

    l = 1;
    r = 5;
//    printf((r - l) % 2 == 1 && r - l < up ? "1\n" : "0\n");

    return 0;
}