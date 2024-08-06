#include <cstdio>

int main()
{
    volatile int hh = 12, mm = 34; // 赋予合理的输入值

    // 注释掉输入语句
    /*
    scanf("%d:%d", &hh, &mm);
    */

    do
    {
        ++mm;
        if (mm == 60)
        {
            ++hh;
            mm = 0;
        }
        if (hh == 24)
        {
            hh = 0;
        }
    } while (hh % 10 * 10 + hh / 10 != mm);

    // 注释掉输出语句
    /*
    printf("%02d:%02d\n", hh, mm);
    */

    return 0;
}