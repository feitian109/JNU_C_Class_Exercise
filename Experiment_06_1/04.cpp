#include <iostream>
using namespace std;

int ans;

int main()
{
    for (int i = 1; i <= 100; i++) {
        if (i == 8)
            ans += i;
        if (i >= 10) {
            if (i % 10 != 0 && i % 10 % 8 == 0)
                ans += i;
            else if (i / 10 == 8)
                ans += i;
        }
    }
    cout << ans;
    return 0;
}