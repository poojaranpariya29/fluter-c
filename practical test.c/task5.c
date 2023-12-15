#include <stdio.h>
int main()
{

    int a, b, c;

    printf("first number= ");
    scanf("%d", &a);
    printf("second number= ");
    scanf("%d", &b);
    printf("third number= ");
    scanf("%d", &c);

    if (a < b)
    {
        if (a < c)
        {
            printf("minimum value is %d", a);
        }
        else
        {
            printf("minimum value ic %d", c);
        }
    }

    else if (b < a)
    {
        if (b < c)
        {
            printf("minimum value is %d", b);
        }
        else
        {
            printf("minimum value is %d", c);
        }
    }

    return 0;
}
