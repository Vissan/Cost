#include <iostream>
#include <string>
#include <cstring>

using namespace std;

// 手动实现字符串转小写
void toLowerCase(string& s) {
    for (char& c : s) {
        if (c >= 'A' && c <= 'Z') {
            c = c - 'A' + 'a';
        }
    }
}

// 手动实现字符串比较
int compareStrings(const string& s1, const string& s2) {
    int len1 = s1.length();
    int len2 = s2.length();
    int minLen = min(len1, len2);

    for (int i = 0; i < minLen; i++) {
        if (s1[i] < s2[i]) {
            return -1;
        } else if (s1[i] > s2[i]) {
            return 1;
        }
    }

    if (len1 < len2) {
        return -1;
    } else if (len1 > len2) {
        return 1;
    }

    return 0;
}

int main() {
    // 赋予合理的输入值
    string s1 = "Hello";
    string s2 = "hello";

    // 转换为小写
    toLowerCase(s1);
    toLowerCase(s2);

    // 比较字符串
    int result = compareStrings(s1, s2);

    // 可以在这里根据result的值进行其他操作
    // 例如，将结果存储到文件、变量等以供后续使用

    // 替代输出语句的示例：将结果打印到控制台（仅作为示例，实际应去掉所有输入输出）
    // cout << result << endl;

    return 0;
}