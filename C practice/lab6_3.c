#include<stdio.h>

int GCD(int,int);
int LCM(int,int);

int main()
{
    int a,b;

    printf("Enter two positive integer \n");
    scanf("%d%d",&a,&b);

    printf("GCD= %d\nLCM =%d\n",GCD(a,b),LCM(a,b));
    return 0;
}

int GCD(int a,int b)
{
    if(b==0){
        return a;
    }
    return GCD(b,a%b);
}
int LCM(int a,int b)
{
    int gcd=GCD(a,b);
    return (a/gcd)*b;
}