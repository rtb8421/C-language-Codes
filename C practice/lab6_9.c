#include <stdio.h>
void swap(int * ,int* );
void badswap(int,int);


int main() {
    int x = 10;
    int y = 20;

    printf("Before swap: x = %d, y = %d\n", x, y);

    badSwap(x, y);

    printf("After badSwap(): x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("After swap(): x = %d, y = %d\n", x, y);

 return 0;
}
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void badSwap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}