#include <iostream>
using namespace std;

int day;

int main()
{
    cout << "Input the week number(0-6):\n";
    cin >> day;

    switch (day) {
    case 0:
        cout << "Sunday"
             << "\n";
        break;
    case 1:
        cout << "Monday"
             << "\n";
        break;
    case 2:
        cout << "Tuesday"
             << "\n";
        break;
    case 3:
        cout << "Wednesday"
             << "\n";
        break;
    case 4:
        cout << "Thursday"
             << "\n";
        break;
    case 5:
        cout << "Friday"
             << "\n";
        break;
    case 6:
        cout << "Saturday"
             << "\n";
        break;

    default:
        cout << "Input Operator error!"
             << "\n";
    }
}