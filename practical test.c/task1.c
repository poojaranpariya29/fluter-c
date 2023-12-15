#include <stdio.h>
int evennumber(int a, int b)
{
    printf("odd number :\n");

    for (int i = a; i < b; i++)
    {
        if ((i % 2) != 0)
        {
            printf("%d, ", i);
        }
    }
    return 0;
}
int main()
{
    int a, b;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);

    evennumber(a, b);
    return 0;
}
