#include<stdio.h>

int main()
{
    int q;
    float g_s,p,b,cmm;
    printf("Number of item sold and their price\n");
    scanf("%d%f",&q,&p);
    b=(float)200*q;
    cmm=(float)0.02*q*p;
    g_s=(float)15000+b+cmm;
    printf("bonus=%f\n",b);
    printf("commission=%f\n",cmm);
    printf("gross_salary=%f\n",g_s);
    
    
    return 0;
}