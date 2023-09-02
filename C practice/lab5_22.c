#include<stdio.h>

int main()      {

    int i,j,n,sum=0,f=1;
    printf("Enter number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                f=f*j;
        }
        sum=sum+f;
        }
            printf("Factorial sum= %d",sum);

    return 0;
}