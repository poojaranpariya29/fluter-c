#include <stdio.h>

int main()
{
    int x, y;

    printf("enter the value of x:");
    scanf("%d", &x);
    printf("enter the value of y:");
    scanf("%d", &y);
    printf("before swapping:\n");
    printf("x:%d\n", x);
    printf("y:%d\n", y);
    int *x1 = &x;
    int *y1 = &y;
    int *z = *x1;
    *x1 = *y1;
    *y1 = z;

    printf("after swapping:\n");
    printf("x:%d\n",x);
    printf("y:%d\n",y);
    return 0;
}
