#include<stdio.h>

int main()
{
    int x,y,z;
    printf("Enter the number\n");
    scanf("%d",&x);
    
    float a;
    a=1.0/x;
    y=(-1)*x;
    z=x*x;
    printf("resiprocal value is=%f\n",a);
    printf("The negated value is=%d\nThe square value is=%d\n",y,z);
    
    return 0;
}