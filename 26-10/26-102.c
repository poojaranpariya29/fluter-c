#include <stdio.h>
int main()
{
    int a,b,c,d,big;
    printf("a=\n");
    scanf("%d",&a);
    printf("b=\n");
    scanf("%d",&b);
    printf("c=\n");
    scanf("%d",&c);
    printf("d=\n");
    scanf("%d",&d);

    if(a > b) {
        if(a > c) {
            if(a > d)
                {printf("maximum value is=%d",a);
                }
            else
               {printf("maximum value is=%d",d);
               } 
        }
        else
            {printf("maximum value is=%d",c);
            }
    }
    else {
        if(b > c) {
            if(b > d)

               {printf("maximum value is=%d",b);
               } 
            else
                {printf("maximum value is=%d",d);
                }
        }
        else {
            if (c > d)
                {printf("maximum value is=%d",c);
                }
            else
                {printf("maximum value is=%d",d);
                }
    
    
        }
    }
    return 0;
}















