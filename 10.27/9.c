#include <stdio.h>

int retired, a;
float b;

int main()
{
    printf("请输入您的收入和是否离退休人员（1表示是，0表示否）：");
    scanf("%d,%d", &a, &retired);
    if (retired == 1) {
        printf("免纳税！");
    } else {
        if (a <= 5000) {
            printf("免纳税！");
            return 0;
        } else if (5000 < a && a <= 8000) {
            a -= 5000;
            b += 0.03 * a;
        } else if (8000 < a && a <= 15000) {
            b += 0.03 * 3000;
            a -= 8000;
            b += 0.1 * a;
        } else if (15000 < a){
            b += 0.03 * 3000;
            b += 0.1 * 7000;
            a -= 15000;
            b += 0.2 * a;
        }
        printf("纳税金额为%.2f", b);
        return 0;
    }
}