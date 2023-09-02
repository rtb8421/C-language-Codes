#include<stdio.h>
int main()
{
    int a=15,b=20,z1,z2,z3;
    z1=(a==b) || (a<=15) && (b>=a);
    z2=!(a) || (b-a);
    z3=0 || 1&&5;
    printf("The value of z1= %d\n",z1);
    printf("The value of z2= %d\n",z2);
    printf("The value of z3= %d\n",z3);

    return 0;
}

