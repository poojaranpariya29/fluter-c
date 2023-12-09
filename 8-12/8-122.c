#include <stdio.h>

struct employee

{
    int emp_id;
    char emp_name[100];
    int emp_age;
    char emp_role[100];
    char emp_city[100];
    int emp_exprience;
    char emp_company[100];
};
int main()
{
    int n;
    printf("enter employee number= ");
    scanf("%d", &n);
    struct employee E[n];

    for (int i = 0; i < n; i++)
    {
        printf("emp_id=");
        scanf("%d", &E[i].emp_id);
        printf("emp_name=");
        scanf("%s", &E[i].emp_name);
        printf("emp_age=");
        scanf("%d", &E[i].emp_age);
        printf("emp_role=");
        scanf("%s", &E[i].emp_role);
        printf("emp_city=");
        scanf("%s", &E[i].emp_city);
        printf("emp_experience=");
        scanf("%d", &E[i].emp_exprience);
        printf("emp_company=");
        scanf("%s", &E[i].emp_company);

        printf("\n");
    }

    for (int j = 0; j < n; j++)
    {
        printf("%d\n", E[j].emp_id);
        printf("%s\n", E[j].emp_name);
        printf("%d\n", E[j].emp_age);
        printf("%s\n", E[j].emp_role);
        printf("%s\n", E[j].emp_city);
        printf("%d\n", E[j].emp_exprience);
        printf("%s\n", E[j].emp_company);

        printf("\n");
    }
    return 0;
}
