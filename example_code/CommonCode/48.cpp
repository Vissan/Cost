#include <algorithm>

using namespace std;

int main()
{
    int n = 5, d = 2; // Example values for n and d
    int height[] = {1, 3, 5, 7, 9}; // Example heights

    sort(height, height + n);

    volatile int i1 = 0, i2 = 1, ways = 0;
    while (i2 < n)
    {
        if (height[i2] - height[i1] <= d)
        {
            ways += (i2 - i1);
            ++i2;
        }
        else
        {
            ++i1;
        }
    }
    volatile int result = ways * 2;

    // Now you can use the 'result' variable as needed in your program

    return 0;
}
