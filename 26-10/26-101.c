#include <stdio.h>
int main()
{
    int a, b, c;
    printf("a=\n");
    scanf("%d", &a);
    printf("b=\n");
    scanf("%d", &b);
    printf("c=\n");
    scanf("%d", &c);

    if (a < b)
    {
        if (a < c)
        {
            printf("minimum value ia a");
        }
        else
        {
            printf("minimum value is c");
        }
    }
    else
    {
        if (b < c)
        {
            printf("minimum value is b");
        }
        else
        {
            printf("minimum value is c");
        }
    }

    return 0;
}
