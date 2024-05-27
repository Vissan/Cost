#include <iostream> // 仅在需要查看结果时包含

int main() {
    int i = 0;
    int sum = 0;

    // 使用while循环计算1到10的和
    while (i < 10) {
        sum += i;
        ++i;
    }

    // 注意：这里没有使用cout或其他输出语句，但sum现在包含了1到10的和

    return 0;
}