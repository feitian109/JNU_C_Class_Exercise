#include <stdio.h>

int y;

int leap(int year)
{
    if (year % 4 == 0 && year % 100 != 0)
        return 1;
    else if(year % 400 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    printf("请输入年份信息：\n");
    scanf("%d", &y);
    if(leap(y))
        printf("2月份天数是29天");
    else
        printf("2月份天数是28天");

    return 0;
}
