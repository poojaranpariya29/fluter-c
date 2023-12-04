#include <stdio.h>
#include <string.h>
int main()
{

    char a[200];
    int uppercase = 0, lowercase = 0, number = 0, symbol = 0, lengh = 0;
    printf("create your password:");
    gets(a);
    for (int i = 0; a[i] != '\0'; i++)
    {

        if (a[i] >= 'a' && a[i <= 'z'])
            lowercase++;

        else if (a[i] >= 'A' && a[i] <= 'Z')
            uppercase++;

        else if (a[i] >= '0' && a[i] <= '9')
            number++;

        else if (a[i] = '@', a[i] = '#', a[i] = '&', a[i] = '%')
            symbol++;
    }
     if (uppercase >= 1 && lowercase >= 1 && number >= 1 && symbol >= 1 && lengh >= 1)
    {
        printf("your password is strong.");
    }
    else
    {
        printf("your password is not string.");
    }
    return 0;
}