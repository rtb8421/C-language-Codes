#include<stdio.h>

int main()
{

    int i,j;
    for(j=0;j<=7;j++)
    {
        if(j>3+i || j<=5-i)
        {
            printf("*");
        }
        else
        printf(" ");
    }
    printf("/n");

    int l=4;

    for( i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j>=4+l || j<=4-l)
        {
            printf("*");

        }   
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}