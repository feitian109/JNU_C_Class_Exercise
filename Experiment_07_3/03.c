#include <stdio.h>

int main()
{
    char a[8] = "wel", b[100] = "come";
    int i = 0, n = 0;

    while (a[n])
        n++;

    for (i = 0; b[i] != '\0'; i++)
        a[n + i] = b[i];

    printf("%s\n", a);
    return 0;
}