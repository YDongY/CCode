#include <stdio.h>

int main(int argc, char const *argv[])
{
    // +
    // -
    // *
    // /
    int a = 1;
    int b = 2;

    double c, d;

    c = a / b;

    d = a * 1.0 / b;
    printf("%lf \n", c); // 0.000000
    printf("%lf \n", d); // 0.500000

    // a++
    // a--
    // ++a
    // --a

    // -------------------- 比较运算符-----------------
    // 1 表示真， 0 表示假
    printf("%d \n", 4 == 3); // 0
    printf("%d \n", 4 > 3);  // 1
    // ==
    // !=
    // >
    // <
    // >=
    // <=

    // ------------------- 逻辑运算符 ------------------
    // &&:左右为真，结果为真，左边为假，右边不执行
    printf("%d \n", 1 && -1); // 1
    printf("%d \n", 1 && 0); // 0

    // ||:只要有一边为真，结果就为真，左边为真右边不执行
    printf("%d \n", 1 || 0); // 1
    printf("%d \n", 0 || 0); // 0
    return 0;
}
