#include<stdio.h>

int main()  //wap to swap two number
{
  int number1,number2,c;
printf("Enter two number");
scanf("%d%d",&number1,& number2);
c=number1;
number1=number2;
number2=c;
printf("After swapping number1=%d\nnumber2=%d",number1,number2);

return 0;

}