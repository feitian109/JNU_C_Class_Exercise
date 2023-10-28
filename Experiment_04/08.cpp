#include <iostream>
using namespace std;

int n;

int main()
{
    cin >> n;
    cout << n / 3600 << "小时" << n % 3600 / 60 << "分" << n % 3600 % 60 << "秒";
}