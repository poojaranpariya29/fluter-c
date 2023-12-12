#include <stdio.h>
#include <string.h>

struct student

{
    int detail_no;
    int roll_no;
    char name[100];
    int chemistry;
    int mathematics;
    int physics;
};
int main()
{

    int n;
    int total;
    float persent;

    printf("enter student number=");
    scanf("%d", &n);
    struct student s[n];

    for (int i = 0; i < n; i++)

    {
        printf("enter details of student :");
        scanf("%d", &s[i].detail_no);
        printf("roll no=>");
        scanf("%d", &s[i].roll_no);
        printf("name=>");
        scanf("%s", s[i].name);
        printf("chemistry=>");
        scanf("%d", &s[i].chemistry);
        printf("mathematics=>");
        scanf("%d", &s[i].mathematics);
        printf("physucis=>");
        scanf("%d", &s[i].physics);
        printf("\n");
    }

    for (int i = 0; i < n; i++)
    {
        printf("%s(%d)\n", s[i].name, s[i].roll_no);
        printf("chemistry=>%d\n", s[i].chemistry);
        printf("mathematics=>%d\n", s[i].mathematics);
        printf("physics=>%d\n", s[i].physics);
        printf("total=>%d/300\n", s[i].chemistry + s[i].mathematics + s[i].physics);

        total=s[i].chemistry + s[i].mathematics + s[i].physics;
        persent=total/3;
        printf("percent=>%.2f\n",persent);
        printf("\n");
    }

    return 0;
}
