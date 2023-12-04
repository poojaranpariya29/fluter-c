#include <stdio.h>

int cube()
{
    int a;
    int b;
    printf("\nenter any nuber:");
    scanf("%d", &a);
    b = a * a * a;
    printf("cube is:%d", b);
    return b;
}
int main()
{

    cube();
    cube();
    return 0;
}