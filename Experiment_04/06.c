#include <stdio.h>

main()

{

    int x, y, t;

    printf("请输入 x,y:\n", x, y);

    scanf("%d,%d", &x, &y);

    if (x < y) /*如果x<y*/

    {
        t = x;
        x = y;
        y = t;
    } /*x与y交换*/

    printf("交换后的 x=%d,y=%d\n ", x, y);
}