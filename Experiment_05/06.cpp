#include <iostream>
using namespace std;

int x, y;

int main()
{
    cin >> x;
    if (x < 5) {
        y = 1 - x * x * x;
    } else if (5 <= x && x < 15) {
        y = x - 1;
    } else
        y = 2 * x * x - 1;

    cout << y << "\n";
    return 0;
}