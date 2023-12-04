#include <stdio.h>
int main()
{

    int n1, n2;

    printf("enter arry size=");
    scanf("%d", &n1);
    int a[n1];
    printf("enter array A's elements:");
    for (int i = 0; i < n1; i++)
    {
        printf("\na[%d]=", i);
        scanf("%d", &a[i]);
    }
    printf("enter arry size=");
    scanf("%d", &n2);
    int b[n2];
    printf("enter array B's elements:");
    for (int i = 0; i < n2; i++)
    {
        printf("\nb[%d]=", i);
        scanf("%d", &b[i]);
    }
    int c[n1 + n2];
    for (int i = 0; i < n1; i++)
    {
        c[i] = a[i];
    }
    for (int i = 0; i < n2; i++)
    {
        c[i + n1] = b[i];
    }
    printf("array c is:");

    for (int i = 0; i < (n1 + n2); i++)
    {
        printf("%d,\t", c[i]);
    }

    return 0;
}