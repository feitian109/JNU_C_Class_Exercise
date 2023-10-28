#include <algorithm>
#include <iomanip>
#include <iostream>
using namespace std;

int a[3];
float avg;

int main()
{
    cout << setiosflags(ios::fixed) << setprecision(2);
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3, greater<int>());

    avg = 1.0 * (a[0] + a[1] + a[2]) / 3;
    cout << "Sum=" << a[0] + a[1] + a[2] << ",Average=" << avg << ",product=" << a[0] * a[1] * a[2] << ",Min=" << a[2] << ",Max=" << a[0];
}