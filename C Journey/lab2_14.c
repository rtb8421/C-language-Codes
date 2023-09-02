#include<stdio.h>
int main()
{
    int date;
    printf("Enter the date");
    scanf("%d",&date);
    
    if(date==1||date==8||date==15||date==22||date==29)
    {
    printf("Sunday");
    }
    else if(date==2||date==9||date==16||date==23||date==30)
    {
    printf("Monday");
    }
    else if(date==3||date==10||date==17||date==24||date==31)
    {
    printf("Tuesday");
    }
    else if(date==4||date==11||date==18||date==25)
    {
    printf("Wednesday");
    }
    else if(date==5||date==12||date==19||date==26)
    {
    printf("Thursday");
    }
    else if(date==6||date==13||date==20||date==27)
    {
    printf("Friday");
    }
    else if(date==7||date==14||date==21||date==28)
    {
    printf("Saturday");
    }
    else 
    printf("Invalid date");



    return 0;
}