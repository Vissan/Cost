#include <iostream>

using namespace std;

int main()
{
    // 赋予合理的输入值
    volatile int x12 = 1, x13 = 2, x21 = 3, x23 = 4, x31 = 5, x32 = 6;
    volatile int sum = (x12 + x13 + x21 + x23 + x31 + x32) / 2;
    volatile int x11 = sum - x12 - x13;
    volatile int x22 = sum - x21 - x23;
    volatile int x33 = sum - x31 - x32;

    // 注释掉输入语句
    /*
    cin >> x11 >> x12 >> x13 >> x21 >> x22 >> x23 >> x31 >> x32 >> x33;
    */

    // 注释掉输出语句
    /*
    cout << x11 << " " << x12 << " " << x13 << endl;
    cout << x21 << " " << x22 << " " << x23 << endl;
    cout << x31 << " " << x32 << " " << x33 << endl;
    */

    return 0;
}