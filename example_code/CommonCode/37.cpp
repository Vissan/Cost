#include <cstdio>  
#include <algorithm>  
  
using namespace std;  
  
int main() {  
    // 假设输入已经给出，这里直接赋值  
    int n = 5; // 示例输入长度  
    char ch[200001] = {'A', 'I', 'F', 'A', 'A'}; // 示例输入字符串  
  
    // 计算各种字符的数量  
    int allin = count(ch, ch + n, 'A');  
    int in = count(ch, ch + n, 'I');  
    int folded = count(ch, ch + n, 'F');  
  
    // 根据题目要求判断输出  
    if (in == 1) {  
        // 如果有且仅有一个'I'，则输出1  
        // printf("1\n"); // 实际输出代码已注释  
    } else if (in == 0) {  
        // 如果没有'I'，则输出'A'的数量  
        // printf("%d\n", allin); // 实际输出代码已注释  
    } else {  
        // 如果有超过一个'I'，则输出0  
        // printf("0\n"); // 实际输出代码已注释  
    }  
  
    return 0;  
}