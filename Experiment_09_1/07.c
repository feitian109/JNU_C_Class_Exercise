#include <stdio.h>

void input(int* number, int n)
{
    for (int i = 0; i < n; i++)
        scanf("%d", number + i);
}

void max_min_value(int* number, int n)
{
    int min = 0;
    int max = 0;
    int temp;

    for (int i = 1; i < n; i++) {
        if (*(number + i) < *(number + min))
            min = i;
        if (*(number + i) > *(number + max))
            max = i;
    }

    temp = *(number + min);
    *(number + min) = *number;
    *number = temp;

    if (!(min == n - 1 && max == 0)) {
        temp = *(number + max);
        *(number + max) = *(number + n - 1);
        *(number + n - 1) = temp;
    }
}

void output(int* number, int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", *(number + i));
}

int main()
{
    int a[10];

    printf("input 10 numbers:");
    input(a, 10);
    max_min_value(a, 10);
    printf("Now,they are:    ");
    output(a, 10);

    return 0;
}