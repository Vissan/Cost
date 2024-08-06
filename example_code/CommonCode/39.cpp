#include <iostream>

using namespace std;

int main()
{
    int k = 2; // 示例输入
    int l = 8; // 示例输入
    int importance(-1);

    while (l % k == 0)
    {
        l /= k;
        importance += 1;
    }
    if (importance >= 0 && l == 1)
    {
        cout << "YES" << endl << importance << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}