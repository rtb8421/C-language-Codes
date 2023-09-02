#include<stdio.h>
int main()
{
    float num1,num2,sum,sub,mul,div;
    int c,d,mod;
    printf("enter first number\n");
    scanf("%f",&num1);
    printf("enter second number\n");
    scanf("%f",&num2);
    sum=num1+num2;
    sub=num1-num2;
    mul=num1*num2;
    div=num1/num2;
    c=num1;
    d=num2;
    mod=c%d;
    printf("sum is%f\nsub is%f\nmul is%f\ndiv is%f\nmod is%d\n",sum,sub,mul,div,mod);

    return 0; }
