#include <iostream>
#include <string>

using namespace std;

int main()
{
    volatile int n = 3; // Assuming n = 3
    string s = "someinitialvalue"; // Assuming some initial value

    while (n--)
    {
        if (s.length() > 10)
        {
            volatile string result = s[0] + to_string(s.length() - 2) + s[s.length() - 1];
        }
        else
        {
            volatile string result = s;
        }
    }
    return 0;
}
