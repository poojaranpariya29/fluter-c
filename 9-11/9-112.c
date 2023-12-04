#include <stdio.h>
int main()
{
    int i, n, sum;
    float average;
    sum = 0;

    printf("n=");
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)

    {
        printf("\na[%d]=", i);
        scanf("%d", &a[i]);
    }
    printf("average of elements:");
    for (int i = 0; i < n; i++)

    {

        sum = sum + a[i];
        average=sum/n;
    }
    printf("%.2f",average);



    return 0;
}