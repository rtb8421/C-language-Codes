#include<stdio.h>
#include<math.h>

int main()
{
    float rem,v,rm,c=3.1E8;
    printf("Enter rest mass\n");
    scanf("%f",&rm);
    printf("Enter velocity\n");
    scanf("%f",&v);
    rem=rm/sqrt(1.0-(v*v)/(c*c));
    printf("effective relativistic mass=%f",rem);
    return 0;
}