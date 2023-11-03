#include <stdio.h>

int i;

int main()
{
    for (i = 1000; !(i % 5 == 2 && i % 7 == 3 && i % 3 == 1); i--)
        ;
    printf("%d", i);
    return 0;
}

//穷举显然并非最好的办法，或许可以考虑使用中国剩余定理