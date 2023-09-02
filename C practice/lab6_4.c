#include<stdio.h>

int sumofdigits(int);

int main()
{
    int n;
    printf("Enter number \n");
    scanf("%d",&n);
    printf("The sum of number is = %d",sumofdigits(n));



    return 0;
}

int sumofdigits(int n)
{
    int sum=0;
    while(n>0)
    {
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}