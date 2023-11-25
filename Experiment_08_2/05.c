#include <stdio.h>

int main()
{
    int n, i;
    int f = 1;
    printf("input member:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        f = f * i;
        
    printf("%d!=%d\n", n, f);

    return 0;
}