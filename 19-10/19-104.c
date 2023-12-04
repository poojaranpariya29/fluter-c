#include<stdio.h>
int main(){
    int P,R,T;
    printf("principal amount  ");
    scanf("%d",&P);
    printf("rate per annum  ");
    scanf("%d",&R);
    printf("time  ");
    scanf("%d",&T);
    printf("simple interst=%d",P*R*T/100);
    return 0;
}
