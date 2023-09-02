#include<stdio.h>
#include<stdbool.h>

bool isperfect(int);

int main()
{
    int n,result;
    printf("Enter number\n");
    scanf("%d",&n);

    if(isperfect(n))
    {
        printf("This is a perfect number \n");
    }
    else
        printf("This is not a perfect number \n");

    return 0;
}

bool isperfect(int n)
{
    int i,sum=0;
    
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    return sum==n;
}