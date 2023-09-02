#include<stdio.h>
int main()
{
int n;
int i,j;
printf("enter no.");
scanf("%d",&n);
printf("number in ascending order is\n");

for(i=1;i<=n;i++)
{
    printf("%d\t",i);
}
printf("\n");
printf("number in descending oreder\n");
for(j=n;j>=1;j--)
{
    printf("%d\t",j);
}
    return 0;
}