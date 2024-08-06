//4033063   Jul 7, 2013 7:36:19 AM	fuwutu	 285A - Slightly Decreasing Permutations	 GNU C++0x	Accepted	31 ms	0 KB
#include <cstdio>

int main()
{
    int n = 5, k = 3;
//    scanf("%d%d", &n, &k);

    for (int i = 0; i < k; ++i)
    {
//        printf("%d ", n - i);
        n = n + k * 3;
    }
//    printf("1");
    for (int i = 2; i <= n - k; ++i)
    {
//        printf(" %d", i);
    }
//    printf("\n");

    return 0;
}
