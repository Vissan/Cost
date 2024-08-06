#include <iostream>
#include <vector>

using namespace std;

int main()
{
    volatile int n = 5; // 赋予合理的输入值
    vector<int> h = {1, 2, 3, 4, 5}; // 初始化向量h
    vector<int> a = {2, 3, 1, 5, 4}; // 初始化向量a

    // 注释掉输入语句
    /*
    cin >> n;
    vector<int> h(n), a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> h[i] >> a[i];
    }
    */

    volatile int number(0);
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            if (h[i] == a[j])
            {
                number += 1;
            }
            if (a[i] == h[j])
            {
                number += 1;
            }
        }
    }

    // 注释掉输出语句
    /*
    cout << number << endl;
    */

    return 0;
}