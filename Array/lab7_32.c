#include <stdio.h>
#include <string.h>

int myStrlen(char *str) {
    int len = 0;
    while(*str != '\0') {
        len++;
        str++;
    }
    return len;
}

int main() {
    char str[] = "Rohan patel";
    int len = myStrlen(str);
    printf("Length of string: %d\n", len);
}