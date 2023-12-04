#include <stdio.h>
int main()
{

    int n, i;
    printf("enter arry size=");
    scanf("%d", &n);
    int a[n];
    int b[n];
    int c[n];

    printf("enter array A's elements:");
    for (int i = 0; i < n; i++)
    {
        printf("\na[%d]=", i);
        scanf("%d", &a[i]);
    }

    printf("enter array B's elements:");
    for (int i = 0; i < n; i++)
    {
        printf("\nb[%d]=", i);
        scanf("%d", &b[i]);
    }
    printf("array c is:");

    for (int i = 0; i < n; i++)
    {
        c[i] = a[i] + b[i];
    
        printf("%d\t", c[i]);
    }
    return 0;
}