#include<stdio.h>
#include<math.h>

int main()      //wap to find the distance between 2D points
{
    float x1,y1,x2,y2,d;
    printf("Enter a point\n");
    scanf("%f%f",&x1,&y1);
    
    printf("Enter a second point\n");
    scanf("%f%f",&x2,&y2);
    d=sqrt(pow(x1-x2,2)+(y1-y2)*(y1-y2));
    printf("Distance between two points=%f",d);
    return 0;
}