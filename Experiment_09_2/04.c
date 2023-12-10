#include <stdio.h>

char c;
char start = '1';

int main()
{
    while (c != '\n') {
        c = getchar();
        if (start <= c && c <= '9') {
            start = '0';
            putchar(c);
        }
    }
    return 0;
}