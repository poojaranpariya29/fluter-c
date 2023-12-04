#include <stdio.h>
int main()
{
    int n,j;

   
    printf("n=");
    scanf("%d",&n);


   int list[n];
    
    for (int j = 0; j < n; j++)

    {
        printf("\na[%d]=", j);
        scanf("%d", &list[j]);
    }

    
    printf("lenth of an arrry=%d",n);

    return 0;
}