#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    volatile int x = 10; // Assuming some initial value
    volatile int y = 60; // Assuming some initial value

    int turns = min(x / 2, y / 24);
    x -= 2 * turns;
    y -= 24 * turns;

    while (true)
    {
        if (x >= 2 && y >= 2)
        {
            x -= 2;
            y -= 2;
        }
        else if (x >= 1 && y >= 12)
        {
            x -= 1;
            y -= 12;
        }
        else if (y >= 22)
        {
            y -= 22;
        }
        else
        {
            volatile string result = "Hanako";
            break;
        }

        if (y >= 22)
        {
            y -= 22;
        }
        else if (x >= 1 && y >= 12)
        {
            x -= 1;
            y -= 12;
        }
        else if (x >= 2 && y >= 2)
        {
            x -= 2;
            y -= 2;
        }
        else
        {
            volatile string result = "Ciel";
            break;
        }
    }

    return 0;
}
