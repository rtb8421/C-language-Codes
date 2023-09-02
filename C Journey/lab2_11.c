#include<stdio.h>
#include<math.h>

int main()
{
    float iv,range,height,ap,g;
    printf("Enter the initial velocity\n");
    scanf("%f",&iv);
    printf("enter the angle of projection\n");
    scanf("%f",&ap);
    g=9.81;

    height=(iv*iv*sin(ap)*sin(ap))/(2*g);
    range=(iv*iv*sin(2*ap))/g;

    printf("The height is%f\nThe range is%f\n",height,range);




    return 0;
}
