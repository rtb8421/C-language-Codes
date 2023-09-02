#include <stdio.h>

int myStrcmp(const char* str1, const char* str2) {
    int i = 0;

    while (str1[i] == str2[i]) {
        if (str1[i] == '\0') {
            return 0;
        }
        i++;
    }

    return str1[i] - str2[i];
}

int main() {
    char str1[] = "Rohan";
    char str2[] = "Patel";
    int result = myStrcmp(str1, str2);
    printf("%d\n", result);
}