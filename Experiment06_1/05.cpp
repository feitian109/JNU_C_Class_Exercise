#include <iostream>
using namespace std;

int score;
int ans;

int main()
{
    do{
        cin >> score;
        if (score < 60)
            ans++;
    } while (score >= 0);
    ans--;
    cout << ans;
    return 0;
}