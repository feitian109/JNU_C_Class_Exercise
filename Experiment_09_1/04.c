#include <stdio.h>

void fun(int x, int pp[], int* n)
{
    int k = 0;
    for (int j = 1; j <= x; j++) {
        if (x % j == 0 && j % 2 != 0) {
            pp[k] = j;
            k++;
        }
    }
    *n = k;
    // 请补充完整函数体
}

int main()
{
    int x, aa[1000], n, i;

    printf("\nPlease enter an integer number:\n");
    scanf("%d", &x);

    fun(x, aa, &n);

    for (i = 0; i < n; i++)
        printf("%d ", aa[i]);

    printf("\n");
}