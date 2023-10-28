#include <iostream>
using namespace std;

char a, b;

int main()
{
    cout << "input a character(A~Z):" << endl;
    cin >> a;
    b = (a + 'Y' - 2 * 'A') % 26 + 'A';
    cout << a << "->" << b;
}