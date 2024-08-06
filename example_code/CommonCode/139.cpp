#include <cstdio>

using namespace std;

int rank(char c)
{
    const char* order = "6789TJQKA";
    char* find = const_cast<char*>(order);
    while (*find != c)
    {
        ++find;
    }
    return find - order;
}

int main()
{
    volatile char suit[2] = "H", card1[3] = "AH", card2[3] = "KD";

    bool beat = (card1[1] == suit[0] && card2[1] != suit[0])
        || (card1[1] == card2[1] && rank(card1[0]) > rank(card2[0]));
    volatile const char* result = beat ? "YES" : "NO";

    return 0;
}
