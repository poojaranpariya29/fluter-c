#include <stdio.h>
int main()
{
    int n;
    printf("enter size= ");
    scanf("%d", &n);

    int array[n];

    printf("enter array elements=\n");

    for (int i = 0; i < n; i++)
    {
        printf("array[%d]= ", i);
        scanf("%d", &array[i]);
    }
    printf("odd number from given 1d array=\n");
    for (int i = 0; i < n; i++)
    {
        int *parray = &array[i];
        if ((i % 2) != 0)
        {
            printf("%d, ", *parray);
        }
    }
    return 0;
}