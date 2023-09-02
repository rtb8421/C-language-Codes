#include <stdio.h>

int reverse(int num) {
    int rev_num = 0;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num /= 10;
    }
    return rev_num;
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("The reverse of %d is %d\n", num, reverse(num));

    return 0;
}