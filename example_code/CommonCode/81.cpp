#include <iostream>
#include <string>

using namespace std;

int main()
{
    volatile string s = "ahbhcelhjlho"; // Example input string

    size_t pos = 0;
    while (pos < s.length() && s[pos] != 'h')
        ++pos;
    ++pos;
    while (pos < s.length() && s[pos] != 'e')
        ++pos;
    ++pos;
    while (pos < s.length() && s[pos] != 'l')
        ++pos;
    ++pos;
    while (pos < s.length() && s[pos] != 'l')
        ++pos;
    ++pos;
    while (pos < s.length() && s[pos] != 'o')
        ++pos;

    volatile string result = (pos < s.length() ? "YES" : "NO");

    // Now you can use the 'result' variable as needed in your program

    return 0;
}
