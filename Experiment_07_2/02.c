#include <stdio.h>

int n[11];

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int len)
{
    for (int i = 0; i < len - 1; i++) {
        int max = i;
        for (int j = i + 1; j < len; j++)
            if (n[j] > n[max]) {
                max = j;
            }

        swap(&n[max], &n[i]);
    }
}

void print(int len)
{
    for (int i = 0; i < len - 1; i++)
        printf("%d ", n[i]);

    printf("%d\n", n[len - 1]);
}

int main()
{
    for (int i = 0; i < 10; i++)
        scanf("%d", &n[i]);
    sort(10);
    printf("After sort,array a is :");
    print(10);

    printf("Please input a number to insert into array a:\n");
    scanf("%d", &n[10]);
    sort(11);
    printf("After insert a new number,the sorted array a is :");
    print(11);

    return 0;
}

// Reference: https://www.runoob.com/w3cnote/selection-sort.html