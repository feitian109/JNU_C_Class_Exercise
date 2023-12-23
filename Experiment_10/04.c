#include <stdio.h>

struct Student {
    int num;
    char name[10];
    int mathScore;
    int engScore;
    int cScore;
} stu[5];

int totalScore(struct Student stu)
{
    return stu.mathScore + stu.engScore + stu.cScore;
}

int main()
{
    for (int i = 0; i < 5; i++) {
        scanf("%d", &stu[i].num);
        scanf("%s", stu[i].name);
        scanf("%d", &stu[i].mathScore);
        scanf("%d", &stu[i].engScore);
        scanf("%d", &stu[i].cScore);
    }

    int min = 0, max = 0;

    for (int i = 1; i < 5; i++) {
        if (totalScore(stu[i]) < totalScore(stu[min]))
            min = i;

        else if (totalScore(stu[i]) > totalScore(stu[max]))
            max = i;
    }

    printf("The max total score's student is %d  %s  %d\n", stu[max].num, stu[max].name, totalScore(stu[max]));
    printf("The min total score's student is %d  %s  %d", stu[min].num, stu[min].name, totalScore(stu[min]));

    return 0;
}