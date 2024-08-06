#include <iostream>
#include <string>

using namespace std;

int main()
{
    bool fail(false);
    string s;
    string inputs[8] = {
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW"
    };

    for (int i = 0; i < 8; ++i)
    {
        s = inputs[i];
        for (size_t j = 1; j < s.length(); ++j)
        {
            if (s[j] == s[j-1])
            {
                fail = true;
            }
        }
    }

    // 注释掉输出语句
    // cout << (fail ? "NO" : "YES") << endl;

    return 0;
}