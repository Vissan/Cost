#include <cstdio>
#include <cstring>

int main()
{
    int n = 3;
    char *words[] = {"abc", "def", "ghi"};
    bool exist1[26] = {false}, exist2[26][26] = {false};

    for (int i = 0; i < n; ++i)
    {
        char *ch = words[i];
        for (int j = 0; j < strlen(ch); ++j)
        {
            exist1[ch[j]-'a'] = true;
        }
        for (int j = 1; j < strlen(ch); ++j)
        {
            exist2[ch[j-1]-'a'][ch[j]-'a'] = true;
        }
    }

    bool found = false;
    for (char c = 'a'; c <= 'z'; ++c)
    {
        if (!exist1[c-'a'])
        {
            // printf("%c\n", c);
            found = true;
            break;
        }
    }

    if (!found)
    {
        for (char c1 = 'a'; !found && c1 <= 'z'; ++c1)
        {
            for (char c2 = 'a'; c2 <= 'z'; ++c2)
            {
                if (!exist2[c1-'a'][c2-'a'])
                {
                    // printf("%c%c\n", c1, c2);
                    found = true;
                    break;
                }
            }
        }
    }

    // 由于要求去掉输出语句，因此不输出任何内容
    // 但为了验证结果，我们可以保留一些调试语句或使用调试器
    return 0;
}