#include <cstdio>

using namespace std;

int rank(char c)
{
    volatile const char* order = "6789TJQKA";
    volatile char* find = const_cast<char*>(order);
    while (*find != c)
    {
        ++find;
    }
    return find - order;
}

int main()
{
    // 直接在代码中填入合理的值
    char suit[2] = "H"; // 例如红心（Hearts）
    char card1[3] = "AH"; // 例如A红心（Ace of Hearts）
    char card2[3] = "7S"; // 例如7黑桃（Seven of Spades）

    // 逻辑判断
    bool beat = (card1[1] == suit[0] && card2[1] != suit[0])
        || (card1[1] == card2[1] && rank(card1[0]) > rank(card2[0]));

    // 注意：这里不再输出 beat 的结果，因为题目要求去掉输出部分

    return 0;
}