#include<stdio.h>
int main()
{
    int roll,avg;
    printf("enter the student roll number\n");
    scanf("%d",&roll);
    printf("Enter the avarage out of 100\n");
    scanf("%d",&avg);

    if(avg>100)
        printf("invalid input");
        
    else if(avg>=80 && avg<=100)
        printf("A grade");

    else if(avg>=60 && avg<80)
        printf("B grade");

    else if(avg>=50 && avg<60)

        printf("C grade");

    else
        printf("D grade");


    return 0;
}