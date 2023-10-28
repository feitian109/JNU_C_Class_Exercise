#include <math.h>
#define PI 3.1415926;

int main()

{
    float h, r, ly, sy, sq, vq, vz;

    printf("请输入圆半径r，圆柱高h：\n");

    scanf("%f", &r);
    scanf("%f", &h);

    ly = 2.0 * r * PI;
    sy = r * r * PI;
    sq = 4.0 * r * r * PI;

    vq = 4.0 / 3 * r * r * r * PI;
    vz = h * r * r * PI;

    printf("圆周长为：%.2f\n", ly);
    printf("圆面积为：%.2f\n", sy);

    printf("圆球表面积为：%.2f\n", sq);
    printf("圆球体积为：%.2f\n", vq);

    printf("圆柱体积为：%.2f\n", vz);

    return 0;
}