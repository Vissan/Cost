#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    volatile int n = 5; // Example number of registrations
    volatile map<string, int> database;

    for (int i = 0; i < n; ++i)
    {
        volatile string s = "username"; // Example username
        if (database.count(s) == 0)
        {
            database[s] = 1;
        }
        else
        {
            database[s] += 1;
        }
    }

    // Now you can use the 'database' map as needed in your program

    return 0;
}
