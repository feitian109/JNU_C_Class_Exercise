#include <stdio.h>

int main()
{
    char ch, c1, c2;

    printf("Enter a character：");

    ch = getchar();

    if (ch >= 'a' && ch <= 'z')
        ch -= 32;

    c1 = ch - 1;
    c2 = ch + 1;

    if (ch == 'A')
        c1 += 26;
    else if (ch == 'Z')
        c2 -= 26;

    putchar(c1);
    putchar(ch);
    putchar(c2);
    putchar('\n');

    return 0;
}