#include <stdio.h>

int main()
{
    int i, n;
    float s;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        s += 1.0 / i; // 观察s,t的值的变化来查找问题

    printf("s=%f\n", s);

    return 0;
}