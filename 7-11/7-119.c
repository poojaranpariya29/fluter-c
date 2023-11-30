#include<stdio.h>
int main(){

    int i,j,k,l;
     for (k = 5; k >=1; k--)
    {
         for ( l= 1; l<=k; l++)
            {
                printf("%d ",l);
            }
            printf("\n");
    }  

    for ( i = 1; i <= 5; i++)
    {
        for ( j = 1; j <=i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
        
    }
    
        
    return 0;
    
}