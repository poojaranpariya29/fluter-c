#include<stdio.h> 
 int main(void) 
 { 
   float celsius; 
   printf("Enter temperature in celsius: \n"); 
   scanf("%f",&celsius); 
   printf("Temperature in fahrenheit: %f",((celsius*9/5)+32)); 
   return 0; 
 } 