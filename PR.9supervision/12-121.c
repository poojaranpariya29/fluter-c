#include <stdio.h>
#include <string.h>
int main()
{

    FILE *file1 = fopen("even_file.txt", "w");
    FILE *file2 = fopen("odd_file.txt", "w");

    for (int i = 50; i <= 70; i++)
    {
        if (i % 2 == 0)
        {
            fprintf(file1, "%d, ", i);
        }
        else
        {
            fprintf(file2, "%d, ", i);
        }
    }
    fclose(file1);
    fclose(file2);

    return 0;
}