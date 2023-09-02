#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, len;
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    len = strlen(str);
    
    for (i = 0, j = len - 1; i < len / 2; i++, j--) {
        if (str[i] != str[j]) {
            printf("%s is not a palindrome", str);
            return 0;
        }
    }
    
    printf("%s is a palindrome", str);

}