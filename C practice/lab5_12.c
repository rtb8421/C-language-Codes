#include<stdio.h>

int main()  {

    float i,n,sum=0;
    printf("enter the value of n ");
    scanf("%f",&n);

    for(i=1;i<=n;i++)
    {
        sum=sum+1/i;
    }
        sum=1-sum;
        printf("sum is %f",sum);
    return 0;
}