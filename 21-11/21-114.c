#include <stdio.h>
int main()
{
    int r, c, sum = 0;
    printf("size of row =");
    scanf("%d", &r);
    printf("size of coloumn =");
    scanf("%d", &c);

    int a[r][c];
    for (int i = 0; i < r; i++)

    {
        for (int j = 0; j < c; j++)
        {
            printf("a[%d][%d]=", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < r; i++)

    {
        for (int j = 0; j < c; j++)
        {
            if (i == 0 || j == 0 || i == 4 || j == 4)
            {
                printf("%d ", a[i][j]);
                sum = sum + a[i][j];
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("the sum of boundary elements of an array:%d", sum);

    return 0;
}