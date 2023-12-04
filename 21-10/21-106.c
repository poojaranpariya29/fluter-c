#include<stdio.h>
int main(){
     int X;
     int Y;
     int Z;
     printf("X=\n");
     scanf("%d",&X);
     printf("Y=\n");
     scanf("%d",&Y);
     printf("Z=\n");
     scanf("%d",&Z);
     
     printf("ans= %d",(X+Y+Z)^2);
     return 0;


}