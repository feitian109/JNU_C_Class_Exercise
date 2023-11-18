#include <stdio.h>

int main()
{
    int i;
    int sum = 0;
    int a[10];

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    printf("sum=%d\n", sum);

    return 0;
}