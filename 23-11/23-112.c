#include <stdio.h>
int main()
{
    char a[20];
    gets(a);

    printf("\nlowercase string:");
     for (int i = 0; i < a[i]; i++)

    {
        if (a[i] >= 65 && a[i] <= 90)
        {
            printf("%c", a[i] + 32);
        }
        else
        {
            printf("%c", a[i]);
        }
    }
    
    return 0;
}