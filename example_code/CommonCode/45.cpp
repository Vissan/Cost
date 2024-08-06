#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n = 5; // 设置示例输入
    int id[1000] = {1, 2, 3, 3, 2}; // 设置示例输入

    sort(id, id + n);
    int pairs = 0;
    for (int i = 1; i < n; ++i)
    {
        if (id[i] != 0 && id[i] == id[i-1])
        {
            pairs += 1;
            if (i + 1 < n && id[i] == id[i+1])
            {
                pairs = -1;
                break;
            }
        }
    }

    // 移除输出部分，将 cout 替换为其他逻辑，例如将结果存储在一个变量中
    // cout << pairs << endl;
    int result = pairs;

    return 0;
}