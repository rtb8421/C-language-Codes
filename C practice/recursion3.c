#include<stdio.h>

int fact(int n);

int main()
{
        int n;
        printf("Enter the value of n:");
        scanf("%d",&n);

        printf("Ans is %d",fact(n));


    return 0;
}

int fact(int n)
{
        if(n==1)
        {
            return 1;
        }
    int factmn=fact(n-1);
    int factN=factmn * n;
    return factN;

}