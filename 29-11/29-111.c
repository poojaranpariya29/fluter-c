#include <stdio.h>

void elements(int i)
{

    int a[i];
    printf("a[%d]=", i);
    scanf("%d", &a[i]);
}

int array()

{
    int n;
    printf("array size:");
    scanf("%d", &n);
    printf("enter array elements :\n");

    int a[n];
    int add = 0;
    for (int i = 0; i < n; i++)
    {

        {
            elements(i);
        }
    }
    for (int i = 0; i < n; i++)
    {

        {
            add = add + a[i];
        }

        printf("the sum of an array:%d", add);
    }
}

int main()
{

    array();

    return 0;
}
