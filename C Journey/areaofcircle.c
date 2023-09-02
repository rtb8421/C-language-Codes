#include <stdio.h>
#include <math.h>
#define pi 3.141
int main()
{
    float radius, area;
    scanf("%f", &radius);
    area=pi*pow(radius,2);
    printf("Area of Circle = %.2f", area);
    return 0;
}