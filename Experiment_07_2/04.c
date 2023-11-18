#include <stdio.h>
#define n 5

int main()
{
    int a[n][n], i, j;

    // 设置累加器的初始值
    int sum1 = 0;
    int sum2 = 0;

    // 编写程序段，对照程序运行结果参考界面，完成矩阵的生成和输出显示
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("生成的5阶矩阵如下：\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("        %d", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < n; i++)
        sum1 = sum1 + a[i][i];

    for (i = 0; i < n; i++)
        sum2 = sum2 + a[5 - 1 - i][i];

    printf("主对角线元素之和%d\n", sum1);
    printf("副对角线元素之和%d\n", sum2);

    return 0;
}