#include<stdio.h>
int main(){
    int n,i,fn;
    int f1=0;
    int f2=1;
    printf("n=");
    scanf("%d",&n);
    printf("%d,\t",f1);
    printf("%d,\t",f2);
    for ( i = 3; i <= n; i++)
    { 
        fn=f1+f2;
        f1=f2;
        f2=fn;
         printf("%d,\t",fn);
        
    }
    return 0;
    








}

