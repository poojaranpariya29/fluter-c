#include <stdio.h>
int main()
{
    int n;
    printf("array size=");
    scanf("%d", &n);

    int a[n];
    printf("enter array elements=\n");
    for (int i = 0; i < n; i++)
    {
        printf("a[%d]=",i);
        scanf("%d", &a[i]);
    }
    int y=0;


    printf("the squres are:");
    for (int i = 0; i < n; i++)
    {
        
        {
            y=a[i]*a[i];
        printf("%d,\t",y);
        }
        

    }
   
    return 0;
}