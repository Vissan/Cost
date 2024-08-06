#include <algorithm>

using namespace std;

int main()
{
    int n = 3; // Example value, you can change this to the desired number of laptops
    volatile int speed[101] = {0, 2500, 3000, 2000};
    volatile int ram[101] = {0, 8, 16, 4};
    volatile int hdd[101] = {0, 500, 1000, 256};
    volatile int cost[101] = {0, 800, 1000, 600};

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (speed[i] < speed[j] && ram[i] < ram[j] && hdd[i] < hdd[j])
            {
                cost[i] = 1001; // 100 <= cost <= 1000
            }
        }
    }

    int min_cost_index = min_element(cost + 1, cost + 1 + n) - cost;

    // Now you can use min_cost_index as needed in your program

    return 0;
}
