#include<stdio.h>
int main()
{
    char c1=50,c2=122;
    unsigned char c3=122;
    int a = 2250>>2;
    int b = -50<<3;
    int c = c1>>3;
    int d = c2<<2;
    int e = c3<<4;

    printf("%d\t%d\t%d\t%d\t%d\t",a,b,c,d,e);

    return 0;
}