#include <locale.h>
#include <stdio.h>

int main()
{
    int y, x, w;
    printf("input year: \n");
    scanf("%d", &y);
    x = y - 1 + (int)((y - 1) / 4) - (int)((y - 1) / 100) + (int)((y - 1) / 400) + 1;
    w = x - (int)(x / 7) * 7;
    printf("%d年的元旦是星期%d", y, w);
    return 0;
}