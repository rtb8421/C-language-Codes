#include<stdio.h>

int sum(int a,int b);
int printtable(int n);

int main()
{
    int a,b;
    printf("Enter Two numbers");
    scanf("%d%d",&a,&b);

    sum(a,b);

    int n;
    printf("Enter N\n");
    scanf("%d",&n);

    printtable(n);

    return 0;
}

int sum(int a,int b)
{
    printf("sum is %d\n",a+b);
}
int printtable(int n)
{   
    for(int i=1;i<=10;i++)
    {
         printf("%d\n",n*i);
}
    }
   