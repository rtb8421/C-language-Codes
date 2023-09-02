#include <stdio.h>

int factorial(int);
int fact(int);

int factorial(int num) {
    int result = 1;
    for (int i = 2; i <= num; i++) {
        result *= i;
    }
    return result;
}
int fact(int num) {
    if (num == 0) {
        return 1;
    } else {
        return num * fact(num - 1);
    }
}


int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = factorial(num);
    printf("%d! = %d\n", num, result);
return 0;
}
