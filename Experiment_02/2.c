#include <stdio.h>

int main()

{

    int a, b, sum; /* 变量定义 */

    printf("Please Input a,b\n"); /* 输出输入提示信息 */

    scanf("%d %d", &a, &b); /* 输入变量值 */

    sum = a * a + b * b; /* 运算 */

    printf("%d*%d+%d*%d=%d", a, a, b, b, sum); /* 输出结果 */

    return 0;
}