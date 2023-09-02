#include <stdio.h>

int main()
{
    int n, reverse = 0, original, remainder;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    while (n != 0) {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }
    printf("The reverse of the number is %d\n", reverse);
    if (original == reverse) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }
return 0;
}