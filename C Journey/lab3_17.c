#include<stdio.h>
int main()
{
    int n,cb;
    printf("Enter the number\n");
    scanf("%d",&n);

    printf("Enter desired bits\n");
    scanf("%d",&cb);

    n=n & (cb<<1);
    printf("The result is\n%d",n);



    return 0;
}