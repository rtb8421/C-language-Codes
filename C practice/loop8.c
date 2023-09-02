#include<stdio.h>
int main()
{
int i=1;
int n;
printf("Enter the table no.");
scanf("%d",&n);

for(i=1;i<=10;i++)
{
    printf("%d\t",n*i);
}


    return 0;
}