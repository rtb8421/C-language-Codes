#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, count = 0;
    
    printf("Enter a sentence: ");
    fgets(str, 100, stdin);
    
    len = strlen(str);
    
    for (i = 0; i < len; i++) {
        if (str[i] == ' ') {
            count++;
        }
    }
    
    printf("Number of words: %d", count + 1);
}