#include <stdio.h>

int a, sum, count;

int main(){
    for (int i = 0; i < 10;i++) {
        scanf("%d", &a);
        if (a >= 0){
            sum += a;
            count++;
        }
    }

    printf("%d %d", sum, count);
}