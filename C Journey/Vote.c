#include<stdio.h>

int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    
    if (a>=18)
    {
    printf("You are eligible for vote\n",a);
    }
    else
    printf("you are not eligible for vote\n",a);
    return 0;
}