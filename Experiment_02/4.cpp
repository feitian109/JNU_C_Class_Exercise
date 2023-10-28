#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

char junk;
int a, b, sum;

int main()
{
    cin >> a >> junk >> a >> junk >> b;
    sum = pow(a, 3) + pow(a, 3) + pow(b, 3);
    printf("%d^3+%d^3+%d^3=%d", a, a, b, sum);

    return 0;
}