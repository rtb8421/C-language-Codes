#include <stdio.h>

int main() {
    int num1, num2,num3,result;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number (power of 2): ");
    scanf("%d", &num2);

    num3=(int)log2(num2);
    result=num1<<num3;

    printf("The product of two number is\n%d",result);
    return 0;

}
