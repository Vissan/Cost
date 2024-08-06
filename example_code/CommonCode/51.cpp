#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t = 5; // 设置示例输入
    int sx = 1, sy = 1, ex = 5, ey = 5; // 设置示例输入
    string wind = "EWNSN"; // 设置示例输入
    int time(-1);

    // 移除输入部分，使用示例数据
    // cin >> t >> sx >> sy >> ex >> ey >> wind; 

    for (int i = 0; i < t; ++i)
    {
        switch (wind[i])
        {
        case 'E':
            if (sx < ex)
            {
                sx += 1;
            }
            break;
        case 'S':
            if (sy > ey)
            {
                sy -= 1;
            }
            break;
        case 'W':
            if (sx > ex)
            {
                sx -= 1;
            }
            break;
        case 'N':
            if (sy < ey)
            {
                sy += 1;
            }
            break;
        default:
            break;
        }
        if (sx == ex && sy == ey)
        {
            time = i + 1;
            break;
        }
    }

    // 移除输出部分，将 cout 替换为其他输出方式，例如 printf
    // cout << time << endl;
//    printf("%d\n", time);

    return 0;
}