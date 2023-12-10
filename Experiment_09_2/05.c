#include <stdio.h>
#include <string.h>

char clear[1000];
char cipher[1000];

int main()
{
    gets(clear);
    strcpy(cipher, clear);

    for (int i = 0; cipher[i] != '\0'; i++) {
        if ('a' <= cipher[i] && cipher[i] <= 'w') {
            cipher[i] += 3;
        } else if ('x' <= cipher[i] && cipher[i] <= 'z') {
            cipher[i] = cipher[i] - 26 + 3;
        }
    }
    
    puts(cipher);
    puts(clear);

    return 0;
}