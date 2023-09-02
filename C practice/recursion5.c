#include<stdio.h>

float percentage(int,int,int,int,int);

int main()
{ 
    int pds,csa,dbms,os,toc;
    printf("Enter the subjects marks :");
    scanf("%d%d%d%d%d",&pds,&csa,&dbms,&os,&toc);

    printf("percentage is %f",percentage(pds,csa,dbms,os,toc));


    return 0;
}

float percentage(int pds,int csa,int dbms,int os,int toc)
{
    float percentage=(pds+csa+dbms+os+toc)/5;
    return percentage;
}