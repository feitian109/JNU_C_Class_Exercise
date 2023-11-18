#include <stdio.h>

int a[3][4];
int max, maxy;

int main()
{
    printf("请按顺序输入3行4列矩阵中各行中数据：\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            scanf("%d", &a[i][j]);

    for (int j = 0; j < 4; j++) {
        max = a[0][j];
        maxy = 0;
        for (int i = 1; i < 3; i++)
            if (a[i][j] > max) {
                max = a[i][j];
                maxy = i;
            }

        printf("第%d列第%d行元素%d为最大值\n", j + 1, maxy + 1, max);
    }

    return 0;
}