#include<stdio.h>
int divisible(){
    int a;
    printf("\nenter any nuber:");
    scanf("%d",&a);

    if (a%3==0 && a%5==0)
    {
       printf("the given number is divisible by both 3&5");
    }
    else
    {
        printf("the given number is not divisible by both 3&5");
    }
    return 0;
}
int main(){

    divisible();
    divisible();
    return 0;
}
