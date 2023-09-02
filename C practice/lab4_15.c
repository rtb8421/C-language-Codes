#include<stdio.h>
int main()
{
    float a,b,c,total,min;
    printf("Enter The price of the three products:");
    scanf("%f%f%f",&a,&b,&c);

    total=a+b+c;

    if(a<b && a<c)
    min=a;
    else if(b<a && b<c)
    min=b;
    else
    min=c;
    
    if(total<1000)
    printf("Amount to be paid=%f",((total-min)*5/100)+(min*7/100)+total);
    else if(total>1000 && total<=10000)
    printf("Amount to be paid=%f",((total-min)*7/100)+(min*9/100)+total);
    else if(total>100000)
    printf("Amount to be paid=%f",(total*15/100)+total);
     else if(total>10000 && total<=100000)
    printf("Amount to be paid=%f",((total-min)*9/100)+(min*11/100)+total);
    else
    printf("Enter valid prices!!!");

    return 0;

}