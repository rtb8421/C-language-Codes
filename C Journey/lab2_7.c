#include<stdio.h>
#include<math.h>
int main()
{
   float p,r,t,ci;
   printf("Enter principle amount\n");
   scanf("%f",&p);
   printf("Enter time\n");
   scanf("%f",&t);
   printf("Enter rate\n");
   scanf("%f",&r);
   ci=p*((pow((1+r/100),t)))-p;
   printf("compound interest is%f",ci);
    return 0;
}