#include <stdio.h>
int main()
{

    int choice, eng, guj, hin;
    printf("press 1 for english\n");
    printf("press 2 for hindi\n");
    printf("press 3 for gujrati\n");
    printf("enter your choice:");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("press 1 for internet recharge\n");
        printf("press 2 for top-up recharge\n");
        printf("press 3 for special recharge\n");
        printf("enter your choice:");
        scanf("%d", &eng);

        switch (eng)
        {
        case 1:
            printf("you have sucessfully done internet recharge");
            break;
        case 2:
            printf("you have sucessfully done top-up recharge");
            break;
        case 3:
            printf("you have sucessfully done special recharge");
            break;

        default:

            break;
        }
        break;

    case 2:
        printf("internet recharge ke liye 1 dabayiye\n");
        printf("top-up recharge ke liye 2 dabayiye\n");
        printf("special recharge ke liye 3 dabayiye\n");
        printf("enter your choice:");
        scanf("%d", &hin);

        switch (hin)
        {
        case 1:
            printf("aapne safltapuravak intenet recharge kar liye he\n");
            break;
        case 2:
            printf("aapne safltapuravak intenet recharge kar liye he\n");
            break;
        case 3:
            printf("aapne safltapuravak intenet recharge kar liye he\n");
            break;

        default:

            break;
        }
        break;

    case 3:
        printf("internet recharge mate 1 dabavo\n");
        printf("top-up recharge mate 2 dabavo\n");
        printf("special recharge mate 3 dabavo\n");
        printf("enter your choice:");
        scanf("%d", &guj);

        switch (guj)
        {
        case 1:
            printf("tme saflatapurvak internet recharge kryu chhe\n");
            break;
        case 2:
            printf("tme saflatapurvak top-up recharge kryu chhe\n");
            break;
        case 3:
            printf("tme saflatapurvak special recharge kryu chhe\n");
            break;

        default:

            break;
        }
        break;
    }
    return 0;
}