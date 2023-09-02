#include <stdio.h>

int main()
{
    int i,a=1,b=2,c,n=18;
    printf("%d,%d,",a,b);

    for (i=1;i<=n;i++)
    {
        
        c=(a+b)-1;
        a = b;
        b= c;
         printf("%d,",c);
    }
    return 0;
}