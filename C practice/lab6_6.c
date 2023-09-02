#include<stdio.h>

int isprime(int);

int main()
{
    int n,result;
    printf("Enter number\n");
    scanf("%d",&n);

    result =isprime(n);

    if(result==1)
    {
        printf("This is prime\n");
    }
    else
        printf("this is not prime\n");

    return 0;
}

int isprime(int n)
{

    for(int i=2;i<=n-1;i++)
    {
        if(n % i==0) {

            return 0;
        }
    }
    return 1;
}