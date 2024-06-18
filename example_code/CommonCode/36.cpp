#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int n = 3; // 示例点的数量
    int k = 10; // 示例k的值

    double x0 = 0.0; // 示例初始x坐标
    double y0 = 0.0; // 示例初始y坐标
    volatile double x, y, total = 0.0;

    // 示例输入点的坐标
    double points[2][2] = {{3.0, 4.0}, {6.0, 8.0}};

    for (int i = 0; i < n - 1; ++i)
    {
        // 使用示例输入点的坐标
        x = points[i][0];
        y = points[i][1];

        total += sqrt((x - x0) * (x - x0) + (y - y0) * (y - y0));
        x0 = x;
        y0 = y;
    }

    // 使用示例结果，模拟输出
    volatile double result = total * k / 50.0;

    return 0;
}
