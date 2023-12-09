#include <stdio.h>

void fun(int m, int* k, int xx[])
{
    int rt = 0;
    for (int i = 3; i < m; i++)
        for (int j = 2; j < i; j++)
            if (i % j == 0) {
                xx[rt] = i;
                rt++;
                break;
            }

    *k = rt;
    // 补充完善函数体
}

int main()
{
    int m, n, zz[100];

    printf("Please enter an integer number between 10 and 100: \n");

    scanf("%d", &n);
    fun(n, &m, zz);

    printf("There are %d non-prime numbers less than %d:\n", m, n);

    for (n = 0; n < m; n++)
        printf("%4d", zz[n]);
}