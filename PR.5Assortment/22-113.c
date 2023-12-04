#include<stdio.h>
int main(){
    int r,c;
    printf("array's row size=");
    scanf("%d",&r);
    printf("array's coloumn size=");
    scanf("%d",&c);
     int a[r][c];

    printf("array's elments:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("a[%d][%d]=", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("the transpose matrix of an arry:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
   
    


}