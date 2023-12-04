#include <stdio.h>
#include <string.h>
int main()
{

    char a[200];
    int c[200] = {0};

    printf("enter any string: ");
    gets(a);
    printf("frequency of each letter:\n");

    for (int i = 0; a[i] != '\0'; i++)
        c[a[i]]++;
    for (int i = 0; i < 123; i++)
    {

        if (c[i] != 0)
            printf("\n%c=>%d", i, c[i]);
    }

    return 0;
}