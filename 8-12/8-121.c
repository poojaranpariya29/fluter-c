#include <stdio.h>
#include <string.h>

struct student

{
    int stu_id;
    char stu_name[100];
    int stu_age;
    char stu_course[100];
    char stu_city[100];
    int stu_standard;
    char stu_school[100];
};

int main()
{

    struct student s[3];
    for (int i = 0; i < 3; i++)
    {
        printf("stu_id=");
        scanf("%d", &s[i].stu_id);
        printf("stu_name=");
        scanf("%s", &s[i].stu_name);
        printf("stu-age=");
        scanf("%d", &s[i].stu_age);
        printf("stu_cource=");
        scanf("%s", &s[i].stu_course);
        printf("stu_city=");
        scanf("%s", &s[i].stu_city);
        printf("stu_standard=");
        scanf("%d", &s[i].stu_standard);
        printf("stu_school=");
        scanf("%s", &s[i].stu_school);
        printf("\n");
    }

    for (int j = 0; j < 3 ; j++)
    {
        printf("%d\n", s[j].stu_id);
        printf("%s\n", s[j].stu_name);
        printf("%d\n", s[j].stu_age);
        printf("%s\n", s[j].stu_course);
        printf("%s\n", s[j].stu_city);
        printf("%d\n", s[j].stu_standard);
        printf("%s\n", s[j].stu_school);
         printf("\n");
    }

    return 0;
}