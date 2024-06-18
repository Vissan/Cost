#include <cstdio>

int main()
{
    int n = 5; // Example value for n
    int x[5] = {1, 2, 2, 3, 4}; // Example array of numbers

    int count[8] = {0};
    for (int i = 0; i < n; ++i)
    {
        int x = x[i];
        count[x] += 1;
    }

    bool solution;
    if (count[5] == 0 && count[7] == 0 && count[2] >= count[4] && count[1] == count[4] + count[6] && count[2] + count[3] == count[4] + count[6])
    {
        for (int i = 0; i < count[4]; ++i)
        {
            // Process triplet 1 2 4
        }
        count[2] -= count[4];
        for (int i = 0; i < count[2]; ++i)
        {
            // Process triplet 1 2 6
        }
        for (int i = 0; i < count[3]; ++i)
        {
            // Process triplet 1 3 6
        }
    }
    else
    {
        // No solution
    }

    volatile bool result = solution;

    return 0;
}
