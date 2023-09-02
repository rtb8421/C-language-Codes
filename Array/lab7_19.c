#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int i, j, len1, len2;
    
    printf("Enter two strings: ");
    scanf("%s %s", str1, str2);
    
    len1 = strlen(str1);
    len2 = strlen(str2);
    
    for (i = 0; i <= len2 - len1; i++) {
        for (j = 0; j < len1; j++) {
            if (str2[i+j] != str1[j]) {
                break;
            }
        }
        if (j == len1) {
            printf("The first string occurs at position %d in the second string.", i+1);
            return 0;
        }
    }
    
    printf("The first string is not present in the second string.");

}