#include<stdio.h>

int main()  //wap to calculate volume &surface area of a sphere
{
    int R;
    float pi,area,vol;
    printf("Enter Radius\n");
    scanf("%d",&R);
    area=(float)4*3.14*R*R;
    vol=(float)area*R/3;
    printf("The area is=%f\n",area);
    printf("The volume is=%f\n",vol);
    return 0;
}