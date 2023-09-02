#include<stdio.h>

int sum(int n);

int main()
{
        int n;
        printf("Enter the value of n:");
        scanf("%d",&n);

        printf("Ans is %d",sum(n));


    return 0;
}

int sum(int n)
{
        if(n==1)
        {
            return 1;
        }
    int sumMn=sum(n-1);
    int sumN=sumMn + n;
    return sumN;

}