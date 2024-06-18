#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n = 5; // Example number of matches
    volatile int goal = 0; // Initialize goal count
    string team, win; // Example team names

    while (n--)
    {
        if (goal != 0)
        {
            // Assuming team is read from input
            team = "TeamX";
            if (team == win)
            {
                goal += 1;
            }
            else
            {
                goal -= 1;
            }
        }
        else
        {
            // Assuming win is read from input
            win = "TeamY";
            goal = 1;
        }
    }
    return 0;
}
