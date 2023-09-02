#include<stdio.h>

int main()
{
    int i,n,a,sum=0;
    printf("Enter a number ");
    scanf("%d",&n);

    while(n>0)
    {
        a=n%10;
        sum=sum+a;
        n=n/10;
    }
        printf("sum of digits = %d",sum);
    return 0;
}
    