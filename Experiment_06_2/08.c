#include <stdio.h>

int i = 1;
int j = 1;
float ans = 1;

int main()
{
    for (i = 1; i < 30 ; i++) {
        j *= i;
        ans += 1.0 / j;
    }
    printf("%.5f", ans);
    return 0;
}