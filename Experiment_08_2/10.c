#include <math.h>
#include <stdio.h>
#include <string.h>

double n;
char ans[20];

double convert(double x)
{
    int a = (int)x;
    double b = x - floor(x);
    double r = 0;

    int i = 1;
    while (a > 0) {
        r += (a % 2) * i;
        i *= 10;
        a /= 2;
    }

    double j = 0.1;
    while (b != 0 && j >= 1.0E-6) {
        b *= 2;
        r += (int)b * j;
        b = b - floor(b);
        j *= 0.1;
    }

    return r;
}

int main()
{
    scanf("%lf", &n);
    sprintf(ans, "%lf", convert(n));
    for (int i = strlen(ans) - 1; ans[i] == '0'; i--)
        ans[i] = '\0';
    printf("%s", ans);
    return 0;
}