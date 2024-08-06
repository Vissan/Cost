#include <iostream>
#include <string>

using namespace std;

// 手动实现将小写字母转换为大写字母的函数
char toUpperCase(char c) {
    if (c >= 'a' && c <= 'z') {
        // 小写字母转换为大写字母：ASCII码值减去32
        return c - 'a' + 'A';
    }
    return c;
}

int main() {
    string s ="ihatescnu";
    if (!s.empty()) {
        s[0] = toUpperCase(s[0]); // 将第一个字符转换为大写
    }
//    cout << s << endl;
    return 0;
}