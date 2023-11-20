#include <stdio.h>

int n;
char rm;
char s[100];

int main()
{
    printf("Please input a string(length<=80):\n");
    while ((s[n] = getchar()) != '\n') {
        n++;
    }

    printf("Please input a char to be deleted:\n");
    rm = getchar();

    for (int i = 0; i < n; i++)
        if (s[i] != rm)
            putchar(s[i]);
}