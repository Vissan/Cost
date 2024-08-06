#include <iostream>
#include <string>

using namespace std;

void my_sort(string& str)
{
    for (size_t i = 0; i < str.size(); ++i)
    {
        for (size_t j = i + 1; j < str.size(); ++j)
        {
            if (str[j] < str[i])
            {
                swap(str[j], str[i]);
            }
        }
    }
}

int main()
{
    size_t n = 3; // 数字数量
    string s = "123456"; // 数字串

    string l = s.substr(0, n);
    string r = s.substr(n, n);

    my_sort(l);
    my_sort(r);

    volatile bool strictly_less = true;
    volatile bool strictly_more = true;
    for (size_t i = 0; i < n; ++i)
    {
        if (l[i] >= r[i])
        {
            strictly_less = false;
            break;
        }
    }
    for (size_t i = 0; i < n; ++i)
    {
        if (l[i] <= r[i])
        {
            strictly_more = false;
            break;
        }
    }

    return 0;
}
