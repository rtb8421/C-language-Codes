#include<stdio.h>
int main()
{
    int n,b;
    printf("Enter the number\n");
    scanf("%d",&n);

    printf("Enter desired bits\n");
    scanf("%d",&b);

    n=n | (1<<b);
    printf("The result is\n%d",n);



    return 0;
}