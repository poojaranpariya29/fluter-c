#include<stdio.h>
int main(){
    int n;
    printf("array's size:");
    scanf("%d",&n);
    int a[n];

    printf("array's elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("negative elemnts from an array:");
     for (int i = 0; i < n; i++)
    {
        if (0>a[i])
        {
         printf("%d\t",a[i]);
        }
        
    }
    return 0;
    
    
  
}