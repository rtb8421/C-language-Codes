#include<stdio.h>
int main()
{
    int x=0,y=10,w=20,z,T=1,F=0;
    z=x==y==z;
    printf("The value of z = %d \n",z);

    z=x>y>z;
    printf("The value of z = %d \n",z);

    z=x<y<z;
    printf("The value of z = %d \n",z);

    z=(x==5 && y<15);
    printf("The value of z = %d \n",z);

    z=(x==0 && y>5 && w==10);
    printf("The value of z = %d \n",z);

    z=(x==0 || y>5 && w==20);
    printf("The value of z = %d \n",z);

    z=(F || ++x || w-20 || x);
    printf("The value of z = %d \n",z);

    return 0;
}



