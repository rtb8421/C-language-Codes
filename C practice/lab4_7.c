#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number: ");
    scanf("%d",&num);
	
	if(num%3==0 && num%2==0)
	{
		printf("%d is divisible by both 2 and 3",num);
	}
    else if(num%3!=0 && num%2==0)
    {
        printf("%d is not divisible by 3 but divisible by 2",num);
    }
	else if(num%3==0 && num%2!=0)
	{
		printf("%d is divisible by 3 but not divisible by 2",num);
	}
    else
        printf("%d is not divisible by both 2 and 3",num);
       
        return 0;
}