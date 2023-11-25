#include <stdio.h>

int n;
char s[100];

int MyInstr()
{
    while ((s[n] = getchar()) != '\n') {
        if (s[n] == '*') {
            return n + 1;
        }
        n++;
    }
    return -1;
}

int main()
{
    printf("请输入待检测的字符串信息：\n");
    int p = MyInstr();
    if (p == -1)
        printf("该字符串不含有非法字符*");
    else
        printf("该字符串的第%d位置有非法字符*", p);

    return 0;
}