#include<stdio.h>
int main()
{
    int x,y,i,gcd,lcm,re,nu,d;

    printf("enter two numbers");
    scanf("%d%d",&x,&y);

    nu=(x>y) ? x : y;
    d=(x<y) ? x : y;
    re=nu%d;

    while(re!=0)
    {
        nu=d;
        d=re;
        re=nu%d;

    }
        gcd=d;
        lcm=x*y/gcd;
        printf("GCD of %d and %d = %d\n",x,y,gcd);
        printf("LCM of %d and %d = %d\n",x,y,lcm);
    return 0;
}