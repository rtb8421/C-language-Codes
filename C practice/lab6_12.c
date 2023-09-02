#include <stdio.h>

int fib(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fib(n-1) + fib(n-2);
    }
}

int main() {
    int n = 10;
    printf("Fibonacci number at index %d is %d\n", n, fib(n));
}