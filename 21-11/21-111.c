#include <stdio.h>
int main()
{
    int n, n1;
    float avrg;

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
            sum = sum + a[i][j];
            avrg = sum / (n * n1);
        }
    }

    printf("average of an array%.2f", avrg);

    return 0;
}
