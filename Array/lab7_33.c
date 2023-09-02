#include <stdio.h>
char *myStrcpy(char *dest, const char *src) {
    char *dest_ptr = dest;
    while (*src != '\0') {
        *dest_ptr++ = *src++;
    }
    *dest_ptr = '\0';
    return dest;
}
char *myStrcat(char *dest, const char *src) {
    char *dest_ptr = dest;
    while (*dest_ptr != '\0') {
        dest_ptr++;
    }
    while (*src != '\0') {
        *dest_ptr++ = *src++;
    }
    *dest_ptr = '\0';
    return dest;
}

int main() {
    char str1[20] = "Hello";
    char str2[] = " world!";
    char str3[20] = "Hi, ";
    char str4[] = "there!";

    myStrcpy(str1, str3);
    printf("After myStrcpy: %s\n", str1);
    myStrcat(str1, str2);
    printf("After myStrcat: %s\n", str1);

    myStrcat(str3, str4);
    printf("After myStrcat: %s\n", str3);


}