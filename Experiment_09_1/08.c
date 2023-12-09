#include <stdio.h>

void move(int* arr, int n, int m)
{
    int temp;
    for (int i = 0; i < m; i++) {
        temp = *(arr + n - 1);
        for (int j = n - 1; j >= 1; j--) {
            *(arr + j) = *(arr + j - 1);
        }
        *arr = temp;
    }
}

int main()
{
    int n, m;
    int a[1000];

    printf("how many numbers?");
    scanf("%d", &n);

    printf("input %d numbers:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("how many place you want move?");
    scanf("%d", &m);
    move(a, n, m);

    printf("Now,they are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}