#include <stdio.h>

int main()
{
    int i,a=0,b=1,c=2,d=4;
    printf("%d, %d, %d, %d", a,b,c,d);

    for (i=1;i<=16;i++)
    {
        if(i%2!=0){
            d=d+2;
            printf(",%d ",d);
        }
        else
         d=d+4;
         printf(",%d ",d);
    }
    return 0;
}