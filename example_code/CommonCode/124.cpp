#include <iostream>

using namespace std;

int main()
{
    volatile char ch[101] = {'a', 'b', 'c', 'd', 'e'}; // Assuming some initial value
    volatile int syllables[3] = {5, 7, 5};
    volatile bool haiku = true;

    for (int i = 0; i < 3; ++i)
    {
        int n = 0;
        for (int j = 0; ch[j] != 0; ++j)
        {
            if (ch[j] == 'a' || ch[j] == 'e' || ch[j] == 'i' || ch[j] == 'o' || ch[j] == 'u')
            {
                n += 1;
            }
        }
        if (n != syllables[i])
        {
            haiku = false;
        }
    }
    volatile string result = (haiku ? "YES" : "NO");
    return 0;
}
