#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the number : ");
    scanf("%d",&a);

    b=~a;
    c=~a+1;
    printf("1s complement = %x\n",b);
    printf("2s complement = %x",c);
    return 0;
}

