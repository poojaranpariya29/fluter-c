#include <stdio.h>
#include <string.h>
int main()
{

    FILE *file = fopen("task.txt", "w");

    for (int i = 1; i <= 50; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {

            fprintf(file,"%d ",i);
        }
    }
    fclose(file);
    return 0;
}