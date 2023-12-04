#include <stdio.h>
#include <string.h>

int length()

{

    char word[20];

    printf("enter any string:");
    scanf("%s", &word);
    printf("length is:%d", strlen(word));
    
}
int main()
{
    length();

    return 0;
}