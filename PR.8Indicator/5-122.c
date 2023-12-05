#include <stdio.h>
int main()
{

    int size;
    printf("enter array's size: ");
    scanf("%d", &size);
    int a[size][size];
   

    printf("enter array elements :\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("a[%d][%d]=", i, j);
            scanf("%d", &a[i][j]);
        }
    }
     printf("cubes of all elements: \n");
     for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            int cube=a[i][j]*a[i][j]*a[i][j];
           int *pcube=&cube;
          
           printf("%d ",*pcube);
        }
        printf("\n");
    }

    return 0;
}