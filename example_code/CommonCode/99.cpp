#include <cstdio>

int main()
{
    char symbols[3][4] = {
        {'X', 'O', 'X', '\0'}, // Example row 1
        {'O', 'X', 'O', '\0'}, // Example row 2
        {'X', 'O', 'X', '\0'}  // Example row 3
    };

    volatile bool isSuperAgent = (symbols[0][0] == symbols[2][2] && symbols[0][1] == symbols[2][1] && symbols[0][2] == symbols[2][0] && symbols[1][0] == symbols[1][2]);

    return 0;
}
