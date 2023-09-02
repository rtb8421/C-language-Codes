#include <stdio.h>

int power(int a, int n) {
    if (n == 0) {
        return 1;
    } else {
        return (a * power(a, n-1));
    }
}

int main() {
    int a, n;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("%d raised to the power of %d is %d\n", a, n, power(a, n));
return 0;
}