#include<stdio.h>
int main()
{
    int i,n,c=0;
    printf("Enter a number ");
    scanf("%d",&n);

    for(i=2;i<=n/2;++i)
    {
        if(n%i==0)
        c=1;
        break;
    }

    if(c==0)
    {
        printf("Number is prime");
    }
    else
        printf("Not prime");
    return 0;
}