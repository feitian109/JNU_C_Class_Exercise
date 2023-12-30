#include <stdio.h>

FILE *fp1, *fp2;

// sf for source file, df for destination file
char c, sfName[100], dfName[100];

void printFile(FILE* fp)
{

    for (;;) {
        c = fgetc(fp);
        if (c == EOF)
            break;
        putchar(c);
    }
    putchar('\n');
}

void combineFile(FILE* fp1, FILE* fp2)
{

    for (;;) {
        c = fgetc(fp1);
        if (c == EOF)
            break;
        fputc(c, fp2);
    }
}

int main()
{
    /* fp1 = fopen("aa.txt", "w");
    fputs("Here is the source text file's content.", fp1);
    fclose(fp1);

    fp2 = fopen("bb.txt", "w");
    fputs("Here is the destination text file's content.", fp2);
    fclose(fp2); */

    printf("Please input a source text file's name:\n");
    scanf("%s", sfName);
    fp1 = fopen(sfName, "r");

    printf("Please input a destination text file's name:\n");
    scanf("%s", dfName);
    fp2 = fopen(dfName, "r+");

    printf("Here is the destination text file's content:\n");
    printFile(fp2);
    putchar('\n');

    printf("Here is the source text file's content:\n");
    printFile(fp1);
    putchar('\n');

    rewind(fp1);
    combineFile(fp1, fp2);

    printf("Here is the new destination text file's content:\n");
    rewind(fp2);
    printFile(fp2);

    fclose(fp1);
    fclose(fp2);
    return 0;
}