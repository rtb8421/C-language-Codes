
 
#include <stdio.h>
 
int main()
{
    int num1,num2,c;
    float result;
    char ch;   
     
    printf("Enter first and 2nd number: ");
    scanf("%d%d",&num1,&num2);
     
    printf("choose operation to perform +,-,*,/,%%");
    scanf(" %c",&ch);
     

    switch(ch)    
    {
        case '+':
            printf("Sum is %f",result=num1+num2);
            break;
             
        case '-':
            printf("Sub is %f",result=num1-num2);
            break;
         
        case '*':
             printf("mul is %f",result=num1*num2);
            break;
             
        case '/':
             printf("div is %f",result=(float)num1/(float)num2);
            break;
             
        case '%':
             printf("mod is %d", c=num1%num2);
            break;

            default:
            printf("Invalid operation.\n");
    }
            return 0;
}