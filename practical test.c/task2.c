#include <stdio.h>
int main()
{

    int n1, n2;
    printf("row= ");
    scanf("%d", &n1);
    printf("column= ");
    scanf("%d", &n2);

    int ARRAY[n1][n2];
    printf("enter array elements: \n");

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            printf("ARERY[%d][%d] =", i, j);
            scanf("%d", &ARRAY[i][j]);
        }
    }

    printf("cube of elements= \n");
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            int cube = ARRAY[i][j] * ARRAY[i][j] * ARRAY[i][j];
            printf("%d ", cube);
        }
        printf("\n");
    }

    return 0;
}