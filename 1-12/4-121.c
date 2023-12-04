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
    printf("square of each elements:\n");
    for (int i = 0; i < n; i++)
    {
         int *ap = &a[i];

        printf("%d, ",(*ap)*(*ap));
    }
    return 0;
}