#include<stdio.h>

int main()
{
    int a, b, c;

    
    printf("first angles: ");
    scanf("%d", &a);

     printf("second angles: ");
    scanf("%d", &b);

    /*total tringle area= 180*/
    c = 180-(a + b);

    
    printf("Third angle: %d", c);

    return 0;
}
