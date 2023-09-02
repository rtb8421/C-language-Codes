#include <stdio.h>

int main() {
    int num, max_digit = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        int digit = num % 10;
        if (digit > max_digit) {
            max_digit = digit;
        }
        num /= 10;
    }

    printf("The largest digit of the above number is: %d\n", max_digit);

return 0;
}