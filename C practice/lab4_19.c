#include<stdio.h>
int main()
{
        int a,b,c;
        printf("enter three number");
        scanf("%d%d%d",&a,&b,&c);

        a>b && a>c ? printf("a is maximum") : b>c ? printf("b is maximum") : printf("c is maximum");
        

    return 0;
}