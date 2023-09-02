#include<stdio.h>

int sum(int,int);

int main()
{ 
    int a,b,c;
    printf("Enter two number\n");
    scanf("%d%d",&a,&b);
    
    c=sum(a,b);
     printf("sum is %d\n",c);
    return 0;
}

int sum(int a,int b)
{
    int sum = a+b;
    return sum;
}

