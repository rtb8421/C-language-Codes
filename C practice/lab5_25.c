#include<stdio.h>

int main()      {

    int i,n,r,sum=0,temp;

        printf("Enter the number");
        scanf("%d",&n);

        temp=n;
        while(n>0)
        {
            r=n%10;
            sum=sum+(r*r*r);
            n=n/10;
        }
        if(temp==sum)
            printf("armstrong no");
        else
            printf("Not a amstrong no.");
            
    return 0;
}