#include <iostream>

using namespace std;

int main()
{
    int n = 5; // Example number of players
    volatile int c = 2;
    cout << c;
    for (int i = 2; i < n; ++i)
    {
        c += i;
        if (c > n)
        {
            c -= n;
        }
        // Use 'c' for further calculations or processing
    }
    cout << endl;
    return 0;
}
