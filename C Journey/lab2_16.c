#include<stdio.h>

int main()
{
    float v1,v2,D,Time;
    printf("enter the speed of 1st train\n");
    scanf("%f",&v1);
    printf("enter the speed of 2nd train\n");
    scanf("%f",&v2);
    printf("Enter the distance between two trains\n");
    scanf("%f",&D);

    Time=D/(v1+v2);
    printf("Time required by trains to meet each other%f",Time);

    return 0;





}