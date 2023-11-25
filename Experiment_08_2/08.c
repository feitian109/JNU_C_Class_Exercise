#include <stdio.h>
#define LEN 10

int a[LEN];

int max(int x[])
{
    int a = 0;
    for (int i = 0; i < LEN; i++)
        if (x[i] > x[a])
            a = i;
    return a;
}

int min(int x[])
{
    int a = 0;
    for (int i = 0; i < LEN; i++)
        if (x[i] < x[a])
            a = i;
    return a;
}

int main()
{
    printf("Before change the max and min's position:\n");
    for (int i = 0; i < LEN; i++) {
        scanf("%d", &a[i]);
        printf("%d ", a[i]);
    }
    printf("\n");
    
    int n = min(a);
    int m = max(a);

    int temp = a[min(a)];
    a[n] = a[m];
    a[m] = temp;

    printf("After change the max and min's position:\n");
    for (int i = 0; i < LEN; i++)
        printf("%d ", a[i]);

    return 0;
}