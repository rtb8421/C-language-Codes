#include<stdio.h>

int main()    //wap to covert tempreture in celcius to fharhenheit
{
    int c;  float f;
    printf("Enter celcius temperature");
    scanf("%d",&c);
    f=(float)(9.0*c)/5.0+32.0;
    printf("converted temp=%f\n",f);
    return 0;
}