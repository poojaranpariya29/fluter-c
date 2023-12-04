#include<stdio.h>
#include<string.h>
int main(){

    char email[]="admin@gmail.com";
    char pass[]="123456";
    char useremial[50];
    char userpass[50];

    printf("enter your email: ");
    scanf("%s",&useremial);

    printf("enter your password: ");
    scanf("%s",&userpass);

    if (strcmp(useremial,email)==0 && strcmp(userpass,pass)==0)
    {
       printf("login sucessful........");
    }
    else
    {
        printf("login failed. invalid credentials");
    }
    return 0;
    


}