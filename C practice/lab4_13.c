#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if(isupper(c)) {
        printf("The character in lowercase is: %c", tolower(c));
    } else if(islower(c)) {
        printf("The character in uppercase is: %c", toupper(c));
    }
    return 0;
}