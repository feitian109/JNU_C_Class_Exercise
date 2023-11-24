#include <stdio.h>

char str[1000];
int n = 0;
int ans = 0;

int alphabetic(char a)
{
    if ('a' <= a && a <= 'z')
        return 1;
    else if ('A' <= a && a <= 'Z')
        return 1;
    else
        return 0;
}

int main()
{
    printf("请输入待检测的字符串信息：\n");
    while ((str[n] = getchar()) != '\n') {
        n++;
    }

    for (int i = 0; i < n; i++) {
        if (alphabetic(str[i]))
            ans++;
    }
    printf("待检测的字符串中含有%d个字母字符", ans);

    return 0;
}