#include <stdio.h>
#include <stdlib.h>

char hex[100000];

int main()
{
    scanf("%s", hex);
    printf("%ld", strtol(hex, NULL, 16));
    return 0;
}