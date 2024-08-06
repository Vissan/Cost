#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string s = "a1"; // Starting position
    string t = "b2"; // Target position
    volatile int steps = max(abs(s[0] - t[0]), abs(s[1] - t[1]));
    while (s != t)
    {
        if (s[0] < t[0])
        {
            // Move right
            s[0] += 1;
        }
        else if (s[0] > t[0])
        {
            // Move left
            s[0] -= 1;
        }

        if (s[1] < t[1])
        {
            // Move up
            s[1] += 1;
        }
        else if (s[1] > t[1])
        {
            // Move down
            s[1] -= 1;
        }
    }
    return 0;
}
