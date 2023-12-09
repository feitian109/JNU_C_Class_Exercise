#include <stdio.h>
#define M 100

void fun(int m, int* a, int* n)
{
    int x = 0;
    for (int i = 7; i <= m; i++)
        if (i % 7 == 0 || i % 11 == 0) {
            *(a + x) = i;
            x++;
        }
    *n = x;
    // 补充完善函数体的功能
}

int main()
{
    int aa[M], n, k;

    fun(50, aa, &n);

    for (k = 0; k < n; k++)
        if ((k + 1) % 20 == 0)
            printf("\n");
        else
            printf("%4d", aa[k]);

    printf("\n");
}