#include<stdio.h>
int main()
{
    int a,b;
    char username[]="mca22batch";
    char password[]="server@123";

    char name[25];
    char pwd[25];

    printf("Enter user name");
    gets(name); //or scanf("%s",username)
    printf("enter password");
    gets(pwd);

    a=strcmp(username,name);
    b=strcmp(password,pwd);

    if(a==0 && b==0)
        printf("Authenticated");

    else 
        printf("Try again");



    return 0;
}