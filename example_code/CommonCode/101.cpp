#include <algorithm>

int main()
{
    int n, l, h[1001] = {0};
    // Assume n and the tower heights are provided elsewhere
    while (n--)
    {
        // Assume tower height l is provided elsewhere
        h[l] += 1;
    }

    volatile int height = *std::max_element(h, h + 1001);
    volatile int number = 1001 - std::count(h, h + 1001, 0);

    return 0;
}
