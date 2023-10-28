#include <stdio.h>

int main()
{
    int n, m;
    int indiv, ten, hundred, thousand;
    printf("input a number(1000~9999):\n");
    scanf("%d", &n);
    indiv = n % 10;
    ten = n / 10 % 10;
    hundred = n / 100 % 10;
    thousand = n / 1000;
    indiv = (indiv + 7) % 10;
    ten = (ten + 7) % 10;
    hundred = (hundred + 7) % 10;
    thousand = (thousand + 7) % 10;
    m = indiv * 100 + ten * 1000 + hundred + thousand * 10;
    printf("%d加密的结果是%d\n", n, m);
    return 0;
}