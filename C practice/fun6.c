#include<stdio.h>

int sum(int,int);
int sub(int,int);
int mul(int,int);
float div(float,float);
int mod(int,int);

int main()
{
    int a,b;
    printf("Rnter two numbers :");
    scanf("%d%d",&a,&b);

    printf("sum is %d\n",sum(a,b));
     printf("sub is %d\n",sub(a,b));
      printf("mul is %d\n",mul(a,b));
       printf("div is %f\n",div(a,b));
        printf("mod is %d\n",mod(a,b));


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
int mod(int a,int b)
{
    return a%b;
}