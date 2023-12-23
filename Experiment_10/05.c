#include <stdio.h>
#include <malloc.h>

#define LEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))

struct NODE {
    int data;
    struct NODE* next;
};

struct NODE* newNode()
{
    return (struct NODE*)malloc(sizeof(struct NODE));
}

struct NODE* newLink(int arr[], int len)
{
    // H for Head link, P for normal link
    struct NODE* H = newNode();
    struct NODE* P = newNode();
    H->next = P;

    for (int i = 0; i < len; i++) {
        if (i != 0) {
            P->next = newNode();
            P = P->next;
        }
        P->data = arr[i];
    }

    P->next = NULL;
    return H;
}

void mixLink(struct NODE* aH, struct NODE* bH)
{
    struct NODE* aP = aH->next;
    struct NODE* bP = bH->next;
    struct NODE *naP, *nbP;

    for (;;) {
        if (aP->next == NULL) {
            aP->next = bP;
            break;
        }
        if (bP->next == NULL) {
            naP = aP->next;
            aP->next = bP;
            bP->next = naP;
            break;
        }
        naP = aP->next;
        nbP = bP->next;
        aP->next = bP;
        aP = naP;
        bP->next = aP;
        bP = nbP;
    }
}

void printLink(struct NODE* H)
{
    struct NODE* P = H->next;

    while (P != NULL) {
        printf("%5d", P->data);
        P = P->next;
    }
}

int main()
{
    int a[] = { 5, 10, 15 };
    int b[] = { 1, 4, 6, 8, 30, 45 };

    struct NODE* aH = newLink(a, LEN(a));
    struct NODE* bH = newLink(b, LEN(b));

    mixLink(aH, bH);
    printLink(aH);

    return 0;
}
