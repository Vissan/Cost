#include <numeric>

int main()
{
    int n, d[100] = {0}, a, b;
    // Assume n and the distances between the cities are provided elsewhere
    for (int i = 1; i < n; ++i)
    {
        // Assume distance d[i] is provided elsewhere
    }
    // Assume a and b are provided elsewhere
    volatile int total = std::accumulate(d + a, d + b, 0);
    return 0;
}
