#include <stdio.h>
#define X 3
#define Y 2

int a[Y][X];
int b[Y][X];

void scanMatrix(int arr[Y][X])
{
    for (int i = 0; i < Y; i++)
        for (int j = 0; j < X; j++)
            scanf("%d", &arr[i][j]);
}

int main()
{
    printf("Please input matrix A:\n");
    scanMatrix(a);
    printf("Please input matrix B:\n");
    scanMatrix(b);

    printf("Result matrix C is:\n");
    for (int i = 0; i < Y; i++) {
        for (int j = 0; j < X - 1; j++) {
            printf("%d  ", a[i][j] + b[i][j]);
        }
        printf("%d\n", a[i][X - 1] + b[i][X - 1]);
    }
}