#include <stdio.h>

FILE* fp;

struct STUDENT {
    int XH;
    char XM[100];
    int CJ[3];
    float avgCJ;
} stu[5];

int main()
{
    fp = fopen("file11_3.txt", "w");

    for (int i = 0; i < 5; i++) {
        printf("Please input XH of No %d:\n", i + 1);
        scanf("%d", &stu[i].XH);

        printf("Please input XM of No %d:\n", i + 1);
        scanf("%s", stu[i].XM);

        printf("Please input CJ of No %d:\n", i + 1);
        scanf("%d %d %d", &stu[i].CJ[0], &stu[i].CJ[1], &stu[i].CJ[2]);
        stu[i].avgCJ = (float)(stu[i].CJ[0] + stu[i].CJ[1] + stu[i].CJ[2]) / 3;

        fprintf(fp, "%d  %s  %d  %d  %d  %.1f\n", stu[i].XH, stu[i].XM, stu[i].CJ[0], stu[i].CJ[1], stu[i].CJ[2], stu[i].avgCJ);
    }

    fclose(fp);
    return 0;
}