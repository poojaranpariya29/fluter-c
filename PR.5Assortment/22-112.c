#include <stdio.h>
int main()
{
    int r, c;
    printf("array's row size:");
    scanf("%d", &r);
    printf("array's column size:");
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
    printf("the largest elements is:");
    int max = 0;
    for (int i = 0; i < r; i++)

    {
        for (int j = 0; j < c; j++)
        {
            if (max < a[i][j])
            {
                max = a[i][j];
            }
        }
    }
    printf("%d", max);
    return 0;
}