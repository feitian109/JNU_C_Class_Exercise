#include <math.h>
#include <stdio.h>

int n, sum;
int a;

int main()
{
    scanf("%d", &n);
    for (int i = pow(10, n - 1); i < pow(10, n); i++) {
        sum = 0;
        for (int j = 1; j <= n; j++) {
            a = i / pow(10, n - j);
            sum += pow(a % 10, n);
        }

        if (sum == i)
            printf("%d\n", i);
    }

    return 0;
}