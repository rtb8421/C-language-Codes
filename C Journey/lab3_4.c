#include <stdio.h>

int main() {
    float n,d,result;
    printf("please enter the numerator and denomenator\n");
    scanf("%f%f",&n,&d);

    if(d==0)
    {
        printf("Error not divide by 0");
    }
    else {
        result=n/d;
        printf("result is %f",result);
    }
    return 0;
}
