#include <iostream>
using namespace std;

char a;

int main()
{
    cin >> a;

    if ('a' <= a && a <= 'z') {
        a = a + ('A' - 'a');
        cout << a;
    }

    else if ('A' <= a && a <= 'Z') {
        a = a - ('A' - 'a');
        cout << a;
    }

    else if ('0' <= a && a <= '9')
        cout << a;

    else
        cout << "others";

    return 0;
}