#include <stdio.h>

int i;

void p()
{
    for (int j = 0; j < 9 - i; j++) {
        printf(" ");
    }
    for (int j = 0; j < 2 * i - 1; j++) {
        printf("%d", i);
    }
    printf("\n");
}

int main()
{
    for (i = 1; i <= 9; i++) {
        p();
    }

    for (i = 8; i >= 1; i--) {
        p();
    }
    return 0;
}