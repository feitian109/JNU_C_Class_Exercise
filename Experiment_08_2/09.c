#include <stdio.h>
#include <string.h>

int s;
char str[5][100];

int palindrome(char x[])
{
    int len = (int)strlen(x);
    for (int i = 0; i <= len / 2 - 1; i++)
        if (x[i] != x[len - i - 1])
            return 0;
    return 1;
}

int main()
{
    printf("Please input 5 strings:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%s", str[i]);
    }

    printf("Huiwens are :\n");
    for (int i = 0; i < 5; i++)
        if (palindrome(str[i])) {
            printf("%s\n", str[i]);
            s++;
        }

    printf("num of Huiwens is :%d", s);
    return 0;
}