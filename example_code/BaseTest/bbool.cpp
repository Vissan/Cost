#include <iostream> // 仅在需要查看结果时包含

int main() {
    bool condition1 = true;
    bool condition2 = false;

    // 逻辑与(&&)
    bool andResult = condition1 && condition2; // 结果为 false

    // 逻辑或(||)
    bool orResult = condition1 || condition2; // 结果为 true

    // 逻辑非(!)
    bool notResult = !condition1; // 结果为 false

    // 注意：这里没有使用cout或其他输出语句

    return 0;
}