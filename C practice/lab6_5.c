#include<stdio.h>

float find_smallest(float,float,float);

int main()
{
    float a,b,c;
    printf("Enter three numbers\n");
    scanf("%f%f%f",&a,&b,&c);

    float smallest=find_smallest(a,b,c);
    printf("The smallest number is= %f ",smallest);


    return 0;
}

float find_smallest(float a,float b,float c)
{
 float smallest=a;

 if(b<smallest)
 {
    smallest=b;
 }
 if(c<smallest)
 {
    smallest=c;
 }
 return smallest;
 
}