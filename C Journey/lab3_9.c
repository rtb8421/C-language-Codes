#include<stdio.h>
int main()
{
    int a,s,m,h;
    printf("Enter the seconds : ");
    scanf("%d",&a);
    h=a/3600;
    a=a%3600;
    m=a/60;
    a=a%60;
    s=a;

printf("The seconds represented in hours, minutes & seconds is : %d hours %d minutes %d seconds",h,m,s);

    return 0;
}
