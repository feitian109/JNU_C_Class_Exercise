#include <math.h>
#include <stdio.h>

double a, b, c;
double delta;
double x, y;

int main()
{
    scanf("%lf,%lf,%lf", &a, &b, &c);
    delta = pow(b, 2) - 4 * a * c;
    x = (-b + sqrt(delta)) / (2 * a);
    y = (-b - sqrt(delta)) / (2 * a);

    if (a == 0)
        printf("The equation is not a quadratic");
    else {
        if (delta > 0)
            printf("The equation has distinct real roots:%.4f and %.4f", x, y);

        else if (delta == 0)
            printf("The equation has two equal roots:%.4f", x);

        else if (delta < 0) {
            x = -b / (2 * a);
            y = sqrt(-delta) / (2 * a);
            printf("The equation  has complex roots:\n");
            printf("%.4f+%.4fi\n", x, y);
            printf("%.4f-%.4fi", x, y);
        }
    }
    return 0;
}