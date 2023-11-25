#include <stdio.h>

int sum(int x[], int a1, int a2)
{
    int ans = 0;
    for (int i = a1; i <= a2; i++) {
        ans += x[i];
    }

    return ans;
}

int main()
{
    int i, i1, i2, x[10];

    for (i = 0; i < 10; i++)
        scanf("%d", &x[i]);

    scanf("%d %d", &i1, &i2);
    printf("Sum=%d\n", sum(x, i1, i2));

    return 0;
}