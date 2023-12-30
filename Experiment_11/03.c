#include <stdio.h>

FILE* fp;

int main()
{
    /* fp = fopen("file11_1.txt", "w");
    fputs("-34  88  -45 32  78 -55  2  ", fp);
    fclose(fp); */

    // s1 for sum>0, s2 for sum<0
    int n, s1 = 0, s2 = 0;

    fp = fopen("file11_1.txt", "r");
    while (!feof(fp)) {
        n = 0;
        fscanf(fp, "%d", &n);
        if (n > 0)
            s1 += n;
        else
            s2 += n;
    }

    printf("sum>0 number is %d,sum<0 number is %d", s1, s2);
    return 0;
}