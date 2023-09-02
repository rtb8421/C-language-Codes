#include <stdio.h>

int main()
{
    int n,a=1,i;

    for (i=0;i<=20;i++)
    {
        
        n=i+a;
        a = n;
         printf("%d,",n);
    }
    return 0;
}