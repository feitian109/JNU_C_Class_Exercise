#include <malloc.h>
#include <stdio.h>

struct Link {
    int data;
    struct Link* next;
};

void InsertList(struct Link* H, int n)
{
    struct Link *p, *q, *s;
    s = (struct Link*)malloc(sizeof(struct Link));
    s->data = n;

    p = H;
    for (;;) {
        if (p->next == NULL) {
            p->next = s;
            p->next->next = NULL;
            break;
        }
        if (p->next->data > n) {
            q = s;
            q->next = p->next;
            p->next = q;
            break;
        }

        p = p->next;
    }
}

int main()
{
    int a[] = { 12, 3, 45, 67, 7, 65, 10, 20, 35, 55 };
    int i;

    struct Link *H, *p;

    H = (struct Link*)malloc(sizeof(struct Link));
    H->next = NULL;

    for (i = 0; i < 10; i++)
        InsertList(H, a[i]);

    p = H->next;

    while (p != NULL) {
        printf("%4d", p->data);
        p = p->next;
    }

    printf("\n");
}