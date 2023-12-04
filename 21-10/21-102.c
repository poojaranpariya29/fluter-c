#include<stdio.h>
int main(){
    int a,b;
    
    printf("value of a is=\n");
scanf("%d",&a);
printf("value of b is=\n");
scanf("%d",&b);

a=a+b;
b=a-b;
a=a-b;
printf("the new value of a=%d\n",a);

    
printf("the new value of b=%d",b);

    
    return 0;
}