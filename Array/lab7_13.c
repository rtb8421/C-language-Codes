#include <stdio.h>
#include <ctype.h>
#include <string.h>

void titleCase(char *str) {
    int len = strlen(str);
    char prev = ' ';
    for (int i = 0; i < len; i++) {
        if (prev == ' ' || prev == '\t' || prev == '\n') {
            str[i] = toupper(str[i]);
        } else {
            str[i] = tolower(str[i]);
        }
        prev = str[i];
    }
}
void sentenceCase(char *str) {
    int len = strlen(str);
    str[0] = toupper(str[0]);
    
    for (int i = 1; i < len; i++) {
        if (str[i] == '.') {
            str[i+2] = toupper(str[i+2]);
        }
    }
}
int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    
    titleCase(str);
    printf("Title Case: %s\n", str);
    sentenceCase(str);
    printf("Sentence Case: %s\n", str);
    
return 0;
}
