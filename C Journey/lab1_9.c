#include <stdio.h>

int main()  //wap to print integer part and decimal part for the given number
{
    float num;

    printf("Enter a number: ");
    scanf("%f", &num);

    int i = num;
    float d = num - i;

    printf("Integer part: %d, Decimal part: %f\n", i, d);

    return 0;
}