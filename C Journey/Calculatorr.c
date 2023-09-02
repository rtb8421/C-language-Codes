#include<stdio.h>
int main()
{
    int a,b,sum,sub,mul,mod,cal;
    printf("Enter first number\n");
    scanf("%d",&a);
    printf("Enter second number\n");
    scanf("%d",&b);
    printf("consider\n 1 is sum \n 2 is sub\n 3 is mul\n 4 is div\n 5 is mod\n");
    scanf("%d",&cal);
    
    if (cal==1)
    {
    sum=a+b;
    printf("The sum is=%d",sum);
    }
    else if (cal==2)
    {
    sub=a-b;
    printf("The sub is=%d",sub);
    }
    else if (cal==3)
    {
    mul=a*b;
    printf("The multiplication is=%d",mul);
    }
    else if (cal==4)
    { 
    float div=a/b;
    printf("The division is=%2f",div);
    }
    else if (cal==5)
    {
    mod=a%b;
    printf("The modulus is=%d",mod);
    }
    else 
    printf("enter valid number");
 return 0;
}