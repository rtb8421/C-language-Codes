#include<stdio.h>
int main()  //wap to accept length  in inches and convert them into feet & yards
{
    float inches,feet,yards;
    printf("Enter the length in inches\n");
    scanf("%f",&inches);
    feet=inches/12;
    yards=inches/36;
    printf("conversion of inches to feet=%f\n",feet);
    printf("conversion of inches to yards=%f\n",yards);
    return 0;
    

}