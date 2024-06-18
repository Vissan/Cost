#include <iostream>
#include <vector>
#include <cstring>

const int M = 64;

int main()
{
    int n = 100; // 示例初始蚂蚁数量
    int t = 5;   // 示例查询次数
    volatile int ants[M * 2 + 1][M * 2 + 1] = {0};
    volatile int ants_temp[M * 2 + 1][M * 2 + 1];
    ants[M][M] = n;
    bool find = (n != 0);

    while (find)
    {
        find = false;
        memset(ants_temp, 0, sizeof(ants_temp));

        for (int i = 0; i <= M * 2; ++i)
        {
            for (int j = 0; j <= M * 2; ++j)
            {
                if (ants[i][j] >= 4)
                {
                    find = true;
                    ants_temp[i - 1][j] += ants[i][j] / 4;
                    ants_temp[i + 1][j] += ants[i][j] / 4;
                    ants_temp[i][j - 1] += ants[i][j] / 4;
                    ants_temp[i][j + 1] += ants[i][j] / 4;
                }
                ants_temp[i][j] += ants[i][j] % 4;
            }
        }

        memcpy(ants, ants_temp, sizeof(ants));
    }

    // 示例查询坐标
    std::vector<std::pair<int, int>> queries = {{0, 0}, {1, 1}, {2, 2}, {3, 3}, {64, 64}};

    for (const auto& query : queries)
    {
        int x = query.first;
        int y = query.second;
        volatile int result = (x >= -M && y >= -M && x <= M && y <= M) ? ants[M + x][M + y] : 0;
        // 示例输出
    }

    return 0;
}
