#include <stdio.h>

char str[1000];

int main()
{
    for (int i = 0; i < 2; i++) {
        gets(str);
        printf("%s", str);
    }

    return 0;
}