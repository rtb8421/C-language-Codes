#include <stdio.h>
#include <string.h>
void myitoa(int num, char* str) {
    int i = 0;
    int sign = 1;
    if (num < 0) {
        sign = -1;
        num = -num;
    }
    do {
        str[i++] = num % 10 + '0';
        num /= 10;
    } while (num > 0);
    if (sign == -1) {
        str[i++] = '-';
    }
    str[i] = '\0';
    int j = 0;
    int len = strlen(str) - 1;
    while (j < len) {
        char temp = str[j];
        str[j] = str[len];
        str[len] = temp;
        j++;
  len--;
    }
}
int main() {
    int num = 1234;
    char str[10];
    myitoa(num, str);
    printf("%s\n", str);

}