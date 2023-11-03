#include <stdio.h>

char a;
int len;

int main()
{
    scanf("%c", &a);
    len = a - 'A' + 1;
    for (int i = 1; i <= len; i++) {
        for (int j = 0; j < i - 1; j++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * (len - i) + 1; j++) {
            a = 'A' - 1 + i;
            printf("%c", a);
        }
        printf("\n");
    }
    return 0;
}