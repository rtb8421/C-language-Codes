#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a positive integer : ");
    scanf("%d",&a);
    b=a<<4;
    printf("The integer shifted 4 bits to the left is : %d\n",b);

    c=a*16;
    if(b==c)
    printf("The shifted integer is the same as the number multiplied by 16 : %d",b);
    else
    printf("The shifted integer is not the same as the number multiplied by 16 : %d != %d",b,c);

    return 0;
}

