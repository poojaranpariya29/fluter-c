#include <stdio.h>
int main()
{
    int n, n1;

    printf("array's row size:");
    scanf("%d", &n);
    printf("array's column size:");
    scanf("%d", &n1);
    printf("array's elements:");
    int a[n][n1];
    for (int i = 0; i < n; i++)

    {

        for (int j = 0; j < n1; j++)
        {
            printf("\na[%d][%d]=", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++)

    {

        for (int j = 0; j < n1; j++)
        {
            if (i == j)
            {
                sum = sum + a[i][j];
            }
        }
        
    }
    printf("the sum of diagonal elelments of an array:%d", sum);

    return 0;
}
