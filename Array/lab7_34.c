#include <stdio.h>
int myatoi(char *str) {
    int result = 0;
    int sign = 1;
    int i = 0;
    while (str[i] == ' ') {
        i++;
    }
    if (str[i] == '-' || str[i] == '+') {
        sign = (str[i] == '-') ? -1 : 1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return sign * result;
}
int main() {
    char str[] = " 1234";
    int num = myatoi(str);
    printf("converted integer %d\n", num);
    return 0;
}