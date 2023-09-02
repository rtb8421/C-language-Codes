#include<stdio.h>

void swap(int*,int*);

int main()
{
    int a,b;
    printf("Enter two number :");
    scanf("%d%d",&a,&b);

    swap(&a,&b);
    printf("%d%d",a,b);

    return 0;
}

void swap(int *a,int *b)
{
    int z;
    z=*a;
    *a=*b;
    *b=z;
    printf("%d%d",*a,*b);
}