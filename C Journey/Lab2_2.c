#include<stdio.h>
int main()  //accept floating point number and round it off to nearest integral value

{
    float a,c;
    int b;
    printf("Enter a number\n");
    scanf("%f",&a);
    c=a+0.5;
    b=c;
    printf("The integral value is%d",b);
    return 0;
}