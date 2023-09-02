#include<stdio.h>

int sum(int,int,int);

int main()
{
    int a,b,c;
    printf("Enter three number \n");
    scanf("%d%d%d",&a,&b,&c);

    printf("sum is %d ",sum(a,b,c));


    return 0;
}

int sum(int a,int b,int c)
{
    return a+b+c;

}