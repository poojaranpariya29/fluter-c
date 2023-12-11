#include <stdio.h>
#include <string.h>

int main()
{

    FILE *file = fopen("filecreater.txt", "r");
    FILE *file1 = fopen("filecreater1.txt", "w");
    char data[100];
    while (fgets(data, 100, file))
    {
        printf("%s", data);
    }

    fputs(data, file1);

    fclose(file);
    fclose(file1);
    return 0;
}