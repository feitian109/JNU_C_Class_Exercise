#include <stdio.h>

int n = 12;

int main()
{
    int a[12];
    int i;
    float av;

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);

        if (i != 0 && (i + 1) % 3 == 0)
            printf("\n");
    }

    for (i = 0; i < n; i++)
        av += a[i];

    printf("av=%.6f\n", 1.0 * av / n);

    return 0;
}