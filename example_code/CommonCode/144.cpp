#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    volatile int n = 5, m = 3; // 赋予合理的输入值

    // 注释掉输入语句
    /*
    cin >> n >> m;
    */

    volatile int Vasya = min(n, m);
    volatile int Petya = n + m - 1 - Vasya;

    // 注释掉输出语句
    /*
    cout << Petya << " " << Vasya << endl;
    */

    return 0;
}