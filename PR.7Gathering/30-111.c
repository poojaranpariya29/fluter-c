#include <stdio.h>
int add(int a, int b)
{

    int c = a + b;

    return c;
}
int subscription(int a, int b)

{

    int c = a - b;

    return c;
}
int multiplication(int a, int b)

{
    int c = a * b;

    return c;
}
int divide(int a, int b)

{
    int c = a / b;

    return c;
}
int persent(int a, int b)
{
    int c = a % b * 100;

    return c;
}

int option()
{
    int x;
    printf("press 1 for +\n");
    printf("press 2 for -\n");
    printf("press 3 for *\n");
    printf("press 4 for /\n");
    printf("press 5 for %%\n");
    printf("press 0 for the exit \n");
    printf("enetr your choise: ");
    scanf("%d", &x);
    if (x != 0)
    {
        int y, z;

        switch (x)
        {
        case 1:

            printf("first number:");
            scanf("%d", &y);
            printf("second number:");
            scanf("%d", &z);
            printf("addition of %d and %d is %d\n", y, z, add(y, z));

            break;
        case 2:

            printf("first number: ");
            scanf("%d", &y);
            printf("second number: ");
            scanf("%d", &z);
            printf("minus of %d and %d is %d\n", y, z, subscription(y, z));

            break;

        case 3:
            printf("first number: ");
            scanf("%d", &y);
            printf("second number: ");
            scanf("%d", &z);
            printf("multiplication of %d and %d is %d\n", y, z, multiplication(y, z));

            break;
        case 4:
            printf("first number: ");
            scanf("%d", &y);
            printf("second number: ");
            scanf("%d", &z);
            printf("divide of %d and %d is %d\n", y, z, divide(y, z));

            break;
        case 5:
            printf("first number: ");
            scanf("%d", &y);
            printf("second number: ");
            scanf("%d", &z);
            printf("module of %d and %d is %d\n", y, z, persent(y, z));
            break;
        default:
            break;
        }

        option();
    }
}

int main()
{

    option();
    return 0;
}
