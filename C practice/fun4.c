#include<stdio.h>

int gst(float);

int main()
{
    int value;
    printf("Enter the value ");
    scanf("%d",&value);

    gst(value);

    printf("The value is %d",value);


   
}

int gst(float value) 
{
    value=value+(0.18*value);
    printf("Total price is %f\n",value);
}