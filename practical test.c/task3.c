#include <stdio.h>

int main()
{
    int a = 2020;
    int b = 2040;

    FILE *file = fopen("pooja.text", "w");
    for (int i = a; i < b; i++)
        if (i % 4 == 0)
        {
            fprintf(file, "%d, ", i);
        }
    fclose(file);

    return 0;
}