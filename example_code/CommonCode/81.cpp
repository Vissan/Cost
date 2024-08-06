#include <algorithm>

using namespace std;

struct point
{
    int x;
    int y;
};

bool cmp(const point& left, const point& right)
{
    return (left.x < right.x)
        || (left.x == right.x && left.y < right.y);
}

int main()
{
    point p[8];
    p[0].x = 1; p[0].y = 1;
    p[1].x = 1; p[1].y = 2;
    p[2].x = 1; p[2].y = 3;
    p[3].x = 2; p[3].y = 1;
    p[4].x = 2; p[4].y = 3;
    p[5].x = 3; p[5].y = 1;
    p[6].x = 3; p[6].y = 2;
    p[7].x = 3; p[7].y = 3;

    sort(p, p + 8, cmp);
    volatile bool result =   p[0].x == p[1].x && p[1].x == p[2].x
                         && p[2].x != p[3].x
                         && p[3].x == p[4].x
                         && p[4].x != p[5].x
                         && p[5].x == p[6].x && p[6].x == p[7].x
                         && p[0].y == p[3].y && p[3].y == p[5].y
                         && p[5].y != p[1].y
                         && p[1].y == p[6].y
                         && p[6].y != p[2].y
                         && p[2].y == p[4].y && p[4].y == p[7].y;

    return 0;
}
