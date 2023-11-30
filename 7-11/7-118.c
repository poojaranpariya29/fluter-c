#include<stdio.h>
int main(){

    int i,j,k,l,m,n,o,p;


     for (i = 5; i >=1; i--)
    {
         for ( j = 1; j<=i; j++)
            {
                printf("%d ",j);
            }
         
        
    for ( k = i; k<5; k++)
    {
        printf("    ");
    }
    
        for ( l = i; l>=1; l--)
        {
            printf("%d ",l);
        }
           
            printf("\n");
  
    }
    for (m = 1; m <=5; m++)
    {
        for ( n = 1; n<=m; n++)
        {
            printf("%d ",n);
        }
        
    for ( o = m; o<5; o++)
    {
        printf("    ");
    }
    
        
            for ( p = m; p >= 1; p--)
            {
                printf("%d ",p);
            }
            printf("\n");
  
    }
 





    return 0;
    
}
