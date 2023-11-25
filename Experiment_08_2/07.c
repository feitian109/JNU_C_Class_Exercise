#include <stdio.h>
#include <string.h>
#define MAX 80

void Insert(char srcStr[])
{
    int i;
    char strTemp[MAX];

    strcpy(strTemp, srcStr);
    for (i = 0; i < (int)strlen(strTemp); i++) {
        srcStr[2 * i] = strTemp[i];
        srcStr[2 * i + 1] = ' ';
    }

    srcStr[2 * i] = '\0';
}

int main()
{
    char string[2 * MAX];

    scanf("%s", string);
    Insert(string);
    printf("%s", string);
}