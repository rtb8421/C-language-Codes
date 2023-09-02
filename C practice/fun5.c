#include<stdio.h>
#include<math.h>

float squarearea(float side);
float circlearea(float radius);
float rectanglearea(float a,float b);

int main()
{
    float a,b,side=10.00,radius=5.00;
    printf("Enter the value of a and b ");
    scanf("%f%f",&a,&b);

    printf("The rectanglearea is %f\n",rectanglearea(a,b));
    printf("The circlearea is %f\n",circlearea(radius));
    printf("The squarearea is %f",squarearea(side));



    return 0;
}

float squarearea(float side)
{
    return side*side;
}

float circlearea(float radius)
{
    return 3.14 *radius*radius;
}
float rectanglearea(float a,float b)
{
    return a*b;
}