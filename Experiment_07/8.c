#include <stdio.h>
#define num(b) sizeof(b) / sizeof(b[0])

char a[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K' };
char x;
int i, n;

void p()
{
    for (i = 0; i < num(a); i++) {
        printf("%c", a[i]);
    }
    printf("\n");
}

int main()
{
    p();
    for (n = 1; n < num(a); n++) {
        x = a[num(a) - 1];
        for (i = num(a) - 1; i >= 0; i--)
            a[i + 1] = a[i];
        a[0] = x;
        p();
    }

    return 0;
}