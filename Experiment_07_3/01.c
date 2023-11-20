#include <stdio.h>
#include <string.h>

int main()
{
    char string[20], str[3][20];
    int i;

    for (i = 0; i < 3; i++)
        gets(str[i]);

    if (strcmp(str[0], str[1]) > 0)
        strcpy(string, str[0]);
    else
        strcpy(string, str[1]);

    if (strcmp(str[2], string) > 0)
        strcpy(string, str[2]);

    puts(string);
    return 0;
}

// Reference: https://www.runoob.com/cprogramming/c-function-strcmp.html