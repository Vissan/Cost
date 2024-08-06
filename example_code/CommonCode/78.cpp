#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n = 4; // Example value for n
    string s = "ABBABAAB"; // Example value for s

    volatile int glasses = 0;
    for (int i = n; i <= s.length(); i += n)
    {
        if (s[i - 1] == s[i - 2] && s[i - 2] == s[i - 3])
        {
            ++glasses;
        }
    }
    volatile int result = glasses;

    // Now you can use the 'result' variable as needed in your program

    return 0;
}
