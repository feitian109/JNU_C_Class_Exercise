#include <stdio.h>

int main()

{
    float c, f;

    printf("请输入一个华氏温度：\n");

    scanf("%f", &f);

    c = (f - 32) * 5 / 9;

    printf("摄氏温度为：%5.2f\n", c);

    return 0;
}