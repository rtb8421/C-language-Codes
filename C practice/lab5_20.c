#include<stdio.h>

int main()      {

    int n,temp,f;
    printf("Enter an integer number ");
    scanf("%d",&n);
    temp=n;
    f=0;
    while(temp!=0)
    {
        if(temp%2!=0)
        f=1;
        break;
    }
        temp=temp/2;

    if(f==0) 
    
        printf("%d is a no. which is power of 2",n);
    
    else    
        printf("%d is not power of 2",n);
        

return 0;
}