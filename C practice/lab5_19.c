#include <stdio.h>
#include <math.h>

int main()
{
    int number, bits = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    while(number > 0)
    {
        number = number / 2;
        bits++;
    }

    printf("The minimum number of bits required to store the number is %d.\n", bits);

return 0;
}