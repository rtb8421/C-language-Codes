#include<stdio.h>

int factorial(int);

int main()
{
    int a,b;
    printf("Enter the value of a");
    scanf("%d",&a);
    b=factorial(a);
    printf("ans = %d",b);
    return 0;
}

int factorial(int a)
{
    if(a==1)
    {
        return 1;
    }
    else
    return a*factorial(a-1);
}