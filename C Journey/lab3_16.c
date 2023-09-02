#include<stdio.h>
int main()
{
    int n,tb;
    printf("Enter the number\n");
    scanf("%d",&n);

    printf("Enter desired bits\n");
    scanf("%d",&tb);

    n=n ^ (1<<tb);
    printf("The result is\n%d",n);



    return 0;
}