#include <stdio.h>
int main()
{
    int n1, n2;
    printf("enter first number:");
    scanf("%d", &n1);
    printf("enter second number:");
    scanf("%d", &n2);
    int a[n1];

    for (int i = n1; i <= n2; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d,\t",i);
        }
    }

    return 0;
}