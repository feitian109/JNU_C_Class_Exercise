#include <iomanip>
#include <iostream>
using namespace std;

int i;
int c = 1;

void p()
{
    cout << setw(3) << i;
    if (i != 999) {
        if (c < 10) {
            cout << " ";
            c++;
        } else {
            cout << "\n";
            c = 1;
        }
    }
}

int main()
{
    for (i = 1; i < 1000; i++) {
        if (i < 10)
            p();

        else if (10 <= i && i < 100 && i / 10 == i % 10)
            p();

        else if (100 <= i && i < 1000 && i / 100 == i % 10)
            p();
    }

    return 0;
}