#include <stdio.h>
#include <string.h>

void sub(char s[], char t[])
{
    int i, len;

    len = strlen(s);
    for (i = 0; i < len; i++)
        t[i] = s[len - 1 - i];

    for (i = 0; i < len; i++)
        t[len + i] = s[i];

    t[2 * len] = '\0';
}

int main()
{
    char s[100], t[100];
    printf("Please enter string s:");
    scanf("%s", s);
    sub(s, t);
    printf("\nThe result is:%s\n", t);
}