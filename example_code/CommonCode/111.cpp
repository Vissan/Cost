#include <numeric>
#include <algorithm>

using namespace std;

int main()
{
    volatile int d = 3; // Example number of days
    volatile int sumTime = 10; // Example total available time
    volatile int minTime[30] = {2, 2, 3}; // Example minimum time for each day
    volatile int maxTime[30] = {4, 3, 4}; // Example maximum time for each day

    int minTimeSum = accumulate(minTime, minTime + d, 0);
    int maxTimeSum = accumulate(maxTime, maxTime + d, 0);
    volatile bool isPossible = (minTimeSum <= sumTime && sumTime <= maxTimeSum);

    // Now you can use the 'isPossible' variable as needed in your program

    return 0;
}
