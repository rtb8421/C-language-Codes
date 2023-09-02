#include <stdio.h>
#include <ctype.h>
#define MAX_SIZE 100
int main() {
    char str[MAX_SIZE];
    int sum = 0;
    int i;
    printf("Enter a string (max length is %d): ", MAX_SIZE-1);
    fgets(str, MAX_SIZE, stdin);
    for (i = 0; str[i] != '\0'; i++) {
        if (isdigit(str[i])) {
            sum += (str[i] - '0');  
        }
    }
    printf("Sum of all digits in the string: %d\n", sum);

}