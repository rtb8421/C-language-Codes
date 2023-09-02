#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str1[10], str2[10], str3[10], str4[10];
    int num1, num2, num3, num4, sum;
    
    printf("Enter four integer strings: ");
    scanf("%s %s %s %s", str1, str2, str3, str4);
    
    num1 = atoi(str1);
    num2 = atoi(str2);
    num3 = atoi(str3);
    num4 = atoi(str4);
    
    sum = num1 + num2 + num3 + num4;
    
    printf("Total of the four values: %d", sum);

}