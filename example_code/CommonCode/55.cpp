#include <cstdio>
#include <cstring>

int main()
{
    char s[] = "aabbbcccc"; // Example string
    int n = 3; // Example value for n
    int count1[128] = {0}, count2[128] = {0};

    // Count characters in the string
    for (int i = 0; i < strlen(s); ++i)
    {
        count1[s[i]] += 1;
    }

    int letters = 0;
    for (int i = 'a'; i <= 'z'; ++i)
    {
        if (count1[i] != 0)
        {
            letters += 1;
        }
    }

    if (letters <= n)
    {
        while (n--)
        {
            int numerator = 1001, denominator = 1, index = 0;
            for (int i = 'a'; i <= 'z'; ++i)
            {
                if (count1[i] != 0)
                {
                    if (count2[i] * denominator < numerator * count1[i])
                    {
                        numerator = count2[i];
                        denominator = count1[i];
                        index = i;
                    }
                }
            }
            count2[index] += 1;
        }

        int sheets = 0;
        for (int i = 'a'; i <= 'z'; ++i)
        {
            if (count2[i] != 0)
            {
                int temp = (count1[i] + count2[i] - 1) / count2[i];
                if (temp > sheets)
                {
                    sheets = temp;
                }
            }
        }

        // Prevent compiler optimization
        volatile int result = sheets;
    }
    else
    {
        // Prevent compiler optimization
        volatile int result = -1;
    }

    return 0;
}
