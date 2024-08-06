#include <iostream>

using namespace std;

int main()
{
    string s = "cAPS"; // Example input string

    volatile bool change = true;
    for (size_t i = 1; i < s.length(); ++i)
    {
        if (s[i] >= 'a')
        {
            change = false;
            break;
        }
    }

    if (change)
    {
        for (size_t i = 0; i < s.length(); ++i)
        {
            if (s[i] >= 'a')
            {
                s[i] -= ('a' - 'A');
            }
            else
            {
                s[i] += ('a' - 'A');
            }
        }
    }

    // Now you can use the 's' variable as needed in your program

    return 0;
}
