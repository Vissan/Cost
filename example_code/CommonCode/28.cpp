#include <cstdio>  
  
int main()  
{  
    int n = 5, d = 3, b0 = 2, b, moves = 0;  
    // 使用数组模拟输入序列  
    int sequence[] = {3, 6, 5, 4, 8};  
      
    for (int i = 0; i < n - 1; ++i)  
    {  
        b = sequence[i];  
        if (b <= b0)  
        {  
            int x = (b0 - b) / d + 1;  
            moves += x;  
            b0 = b + x * d;  
        }  
        else  
        {  
            b0 = b;  
        }  
    }  
      
    // 输出结果，由于要求去掉输出语句，实际使用时可以注释掉或删除下面这行  
    printf("%d\n", moves);  
      
    return 0;  
}