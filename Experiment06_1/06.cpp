#include <iostream>
using namespace std;

int n, i;
bool b[10];

int main()
{
    cin >> n;
    while (n / 2 != 0){
        if (n % 2 == 1)
            b[i] = true;
        i++;
        n /= 2;
    }

    if(n == 1)
        b[i] = true;

    for (; i >= 0; i--)
        cout << b[i];

    return 0;
}