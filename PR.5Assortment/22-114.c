#include <stdio.h>
int main()
{
    int r, c;
    printf("array's row size=");
    scanf("%d", &r);
    printf("array's coloumn size=");
    scanf("%d", &c);
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
    int z, y;
    int sum = 0;
    int add = 0;
    printf("row number:");
    scanf("%d", &z);
    printf("elements of row %d:", z);
    for (int i=0;i<r;i++)
    {

        sum = sum + a[z][i];
        printf("%d,", a[z][i]);
    }
    printf("\n");

    printf("the sum of row %d:%d\n\n", z, sum);

    printf("column number:");
    scanf("%d", &y);
    printf("elements of column %d:", y);
    for (int i=0;i<c; i++)
    {

        add = add + a[i][y];
        printf("%d,", a[i][y]);
    }
    printf("\n");

    printf("the sum of column %d:%d", y, add);

    return 0;
}