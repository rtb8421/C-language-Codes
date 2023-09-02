#include<stdio.h>
int main()
{
    int i,a=0,b=1,c,n;
    printf("Enter number of term that you want to print ");
    scanf("%d",&n);

        for(i=0;i<=n;i++){

        printf("%d\n",a);
        c=a+b;
        a=b;
        b=c;
        }



    return 0;
}