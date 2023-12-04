#include <stdio.h>
#include <string.h>

int main()
{
    int n;


    printf("enter the array size=");
    scanf("%d", &n);
    int a[n];
   
   

    printf("enter arry elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }
     int *p=&a[n-1];
    printf("reversed array elements:\n");
    for (int i = 0; i < n; i++)
    {
       printf("%d,\t",*p);
       p--;
    }
    return 0;
}