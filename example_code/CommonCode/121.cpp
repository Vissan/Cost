#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    volatile int length[4] = {3, 4, 5, 6}; // Assuming some initial values
    sort(length, length + 4);
    volatile bool is_triangle = (length[0] + length[1] > length[2] && length[1] + length[2] > length[3]);
    volatile bool is_segment = (length[0] + length[1] == length[2] || length[1] + length[2] == length[3]);


    return 0;
}
