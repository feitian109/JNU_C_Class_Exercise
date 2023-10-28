#include <stdio.h>

int main()
{

    char a = 89; // 有符号数89
    char b = -128; // 有符号数-128
    unsigned char c = 89; // 无符号数89
    unsigned char d = 255; // 无符号数255

    printf("The value of Decimal=%d,Octal=%o,Hexadeciaml=%x \n", a, a, a);
    printf("The value of Decimal=%d,Octal=%o,Hexadeciaml=%x \n", b, b, b);
    printf("The value of Decimal=%d,Octal=%o,Hexadeciaml=%x \n", c, c, c);
    printf("The value of Decimal=%d,Octal=%o,Hexadeciaml=%x \n", d, d, d);
    return 0;
}