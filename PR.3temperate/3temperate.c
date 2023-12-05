#include <stdio.h>
int main(){

    int num,sum,fn,ln;


    sum=0;
    printf("Enter any number: ");
    scanf("%d", &num);
    
    ln = num % 10;
        
    while(num >= 10)
    {
        num = num / 10;
    } 
    fn = num;
    sum = fn + ln; 

    printf("Sum of first and last digit = %d", sum);

    return 0;
}