#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    volatile int n = 5; // Assuming n = 5
    string name, status;
    vector<string> rats, womenandchildren, men, captain;
    while (n--)
    {
        name = "SomeName";
        status = "rat";
        if (status == "rat")
        {
            rats.push_back(name);
        }
        else if (status == "woman" || status == "child")
        {
            womenandchildren.push_back(name);
        }
        else if (status == "man")
        {
            men.push_back(name);
        }
        else
        {
            captain.push_back(name);
        }
    }
    return 0;
}
