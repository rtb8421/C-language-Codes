#include <stdio.h>

int main() {
    int num = 5;
    int *ptr = &num;

    printf("Value of num: %d\n", num);
    printf("Value of ptr: %p\n", ptr);
    printf("Value pointed by ptr: %d\n", *ptr);

    *ptr = 10; 

    printf("Value of num after indirect assignment: %d\n", num);
    printf("Value pointed by ptr after indirect assignment: %d\n", *ptr);

return 0;
}