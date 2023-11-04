#include <stdio.h>
#include <math.h>

int a, n, ans;

int main()
{
    scanf("%d %d", &a, &n);
    for (int i = 1; i <= n; i++) {
        ans += a * pow(10, i - 1) * (n - i + 1);
        for (int j = 1; j <= i; j++) {
            printf("%d",a);
        }
        if(i == n)
            printf("=");
        else
            printf("+");
    }
    printf("%d", ans);
    return 0;
}