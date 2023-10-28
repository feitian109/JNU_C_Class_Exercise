#include <stdio.h>

// in
int data1, data2;
char op;

// out
int io; // int out
float fo; // float out

void printio()
{
    printf("%d", io);
}

void printfo()
{
    printf("%.2f", fo);
}

int main()
{
    scanf("%d %d %c", &data1, &data2, &op);
    if (op == '+') {
        io = data1 + data2;
        printio();
    } else if (op == '-') {
        io = data1 - data2;
        printio();
    } else if (op == '*') {
        io = data1 * data2;
        printio();
    } else if (op == '/') {
        if (data2 == 0) {
            printf("Zero Divided Error!");
        } else if (data1 % data2 != 0) {
            fo = 1.0 * data1 / data2;
            printfo();
        } else {
            io = data1 / data2;
            printio();
        }
    } else
        printf("ERROR!");

    return 0;
}