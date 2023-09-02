#include<stdio.h>

int sum(int,int);
int sub(int,int);
int mul(int,int);
float div(float,float);

int main()
{
    int a,b;
    printf("Enter the value of a and b\n");
    scanf("%d%d",&a,&b);

    printf("sum =%d\nsub=%d\nmul=%d\ndiv=%f\n",sum(a,b),sub(a,b),mul(a,b),div(a,b));


    return 0;
}

int sum(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
float div(float a,float b)
{
    return a/b;
}