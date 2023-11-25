#include <stdio.h>
#include <string.h>

char str[80];

void Inverse(char str[])
{
    int len, i = 0, j;
    char temp;

    len = strlen(str);
    for (j = len - 1; i < j; i++, j--) {
        temp = str[i]; // 交换两字符
        str[i] = str[j];
        str[j] = temp;
    }
}

int main()
{
    printf("Please enter a string: ");
    gets(str); // 输入字符串
    Inverse(str); // 逆序字符串
    printf("The inversed string is :");
    puts(str); // 输出字符串

    return 0;
}