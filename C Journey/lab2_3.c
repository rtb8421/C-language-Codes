#include<stdio.h>

int main()   //
{
    double a,b;
    int c,d;
    printf("Enter the number\n");
    scanf("%lf",&a);
    b=a+0.999;
    c=b;
    d=a;
    printf("Ceiling is=%d\nfloor is=%d",c,d);
    
    return 0;
}