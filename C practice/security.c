#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,i;
    char username[]="mca22batch";
    char password[]="server@123";

    char name[25];
    char pwd[25];

    printf("Enter user name ");
    gets(name); //or scanf("%s",username)
    printf("enter password ");
    gets(pwd);

    for(i=1;i<=2;i++) {

         a= strcmp(username,name);
         b= strcmp(password,pwd);

    if(a==0 && b==0)
{
      printf("Authenticated");
        break;
    }
    
    else 
    {
        
        printf("Try again!\n");
        printf("Enter user name ");
        gets(name); //or scanf("%s",username)
        printf("enter password ");
        gets(pwd);

    }
   
    }
        printf("User not authenticated You have entered 3 wrong attempts");

    return 0;
}
