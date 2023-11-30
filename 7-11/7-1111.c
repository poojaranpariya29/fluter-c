#include<stdio.h>
int main(){

    int i,j,k,l;
    for ( i = 1; i <=5; i++)
    {
        for (k = i; k < 5; k++)
        {
            printf("  ");
        }
        for ( l = 1; l < i; l++)
        {
            printf("* ");
        }
        
        
        for ( j = i; j >=1; j--)
        {
            printf("* ");
        }
        
        
        printf("\n");
         
    }
    return 0;
    
}