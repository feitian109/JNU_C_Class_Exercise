#include <stdio.h>

char sex;
float height, weight, sweight;

int main()
{
    printf("请输入你的性别(m/f)，身高cm，体重kg：\n");
    scanf("%c,%f,%f", &sex, &height, &weight);

    if (sex == 'm' || sex == 'M')
        sweight = 1.0 * (height - 100) * 0.9;
    else if (sex == 'f' || sex == 'F')
        sweight = 1.0 * (height - 100) * 0.9 - 2.5;

    printf("您的标准体重是%.2fkg\n", sweight);

    if (sweight * 0.9 <= weight && weight <= sweight * 1.1) {
        printf("您是标准体重。");
    } else if (sweight * 1.1 < weight && weight <= sweight * 1.2) {
        printf("您超重了。");
    } else if (sweight * 1.2 < weight && weight <= sweight * 1.3) {
        printf("您属于轻度肥胖。");
    } else if (sweight * 1.3 < weight && weight <= sweight * 1.5) {
        printf("您属于中度肥胖。");
    } else if (sweight * 1.5 < weight) {
        printf("您属于重度肥胖。");
    } else {
        printf("您偏瘦。");
    }

    return 0;
}