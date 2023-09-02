#include <stdio.h>
#include <string.h>

void reverse_string(char *str) {
    if (*str != '\0') {
        reverse_string(str + 1);
        printf("%c", *str);
    }
}

int main() {
    char str[] = "Rohan RTB";

    printf("Original string: %s\n", str);
    printf("Reversed string: ");
    reverse_string(str);
    printf("\n");

}