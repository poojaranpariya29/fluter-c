#include<stdio.h>
int main(){
    int a,b,c;
    printf("first number\n");
    scanf("%d",&a);
    printf("second number\n");
    scanf("%d",&b);
    printf("third number\n");
    scanf("%d",&c);

    (a>b)?(b>c)?printf("minimum value is:%d",a):printf("minimum value is:%d",b):printf("minimum value is:%d",c);
    return 0;
    






}