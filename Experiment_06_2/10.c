#include <stdio.h>

int n, m, id, score, sum;

int main()
{
    printf("Please input student's number:\n");
    scanf("%d", &n);

    printf("Student CJ number is:\n");
    scanf("%d", &m);

    for (int i = 1; i <= n; i++) {
        printf("Please input XH of No %d:\n",i);
        scanf("%d", &id);

        printf("Please input CJ of No %d:\n",i);
        sum = 0;
        for (int j = 0; j < m; j++) {
            scanf("%d", &score);
            sum += score;
        }
        printf("Student No %d's Total CJ is %d,Avg CJ is %.1f", id, sum, 1.0 * sum / m);
        if (i != n)
            printf("\n");
    }

    return 0;
}