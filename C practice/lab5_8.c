#include <stdio.h>

int main()
{
    int n = 20, i;
    int a= 1, b = 3, c;

    for (i=1 ;i<n;i++)
    {
        printf("%d,",a);
        c= a + b;
        a = b;
        b= c;
    }
    return 0;
}