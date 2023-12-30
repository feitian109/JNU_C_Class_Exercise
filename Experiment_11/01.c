#include <stdio.h>
#include <string.h>

int main()

{
    FILE* fp1;
    char ch[80];
    int i, j;

    fp1 = fopen("data1.dat", "w"); // 注意提交CG平台时，将盘符信息d:\\去掉，仅仅保留文件名

    for (i = 1; i <= 4; i++) {
        gets(ch);
        j = 0;

        while (ch[j] != '\0') {
            fputc(ch[j], fp1);
            j++;
        }

        fputc('\n', fp1);
    }

    fclose(fp1);
    return 0;
}