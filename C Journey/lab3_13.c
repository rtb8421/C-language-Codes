#include<stdio.h>
int main()
{
    int a=10,b=20;
    int X=a++ + ++a + ++b - a + ++a;
    int Y = (a++,a+=5,a-1);
    int Z = a>b ? a++ : a-- ? b+1 : b+5;

    printf("The value of X = %d \nThe value of Y = %d \nThe value of Z = %d",X,Y,Z);

    return 0;
}


