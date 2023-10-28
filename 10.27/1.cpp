#include <algorithm>
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int a[3];

    printf("请输入3个整数：");
    for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }

    sort(a, a + 3, greater<int>());

    printf("3个数中最大者为：%d\n", a[0]);

    return 0;
}