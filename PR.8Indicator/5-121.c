#include <stdio.h>
#include <string.h>

int main()
{

    char c[20];

    printf("enter any string\n");
    gets(c);
    int lenght=strlen(c);
    int *pstrlen=&lenght;

    printf("the length of a string is:%d",*pstrlen);
    return 0;
}