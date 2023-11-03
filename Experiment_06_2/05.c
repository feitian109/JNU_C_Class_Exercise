#include <stdio.h>

char a;
int i, len;

void p()
{
    for (int j = 0; j < len - i; j++)
        printf(" ");

    for (char k = 'A'; k <= 'A' + i - 1; k++)
        printf("%c", k);
    for (char k = 'A' + i - 2; k >= 'A'; k--)
        printf("%c", k);

    printf("\n");
}

int main()
{
    scanf("%c", &a);
    len = a - 'A' + 1;

    for (i = 1; i <= len; i++) {
        p();
    }

    for (i = len - 1; i >= 1; i--) {
        p();
    }

    return 0;
}