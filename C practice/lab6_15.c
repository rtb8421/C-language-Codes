#include <stdio.h>

int multiply(int,int);

int multiply(int m, int n) {
    if (n == 1) {
        return m;
    } else {
        return m + multiply(m, n - 1);
    }
}

int main() {
    int m = 5, n = 3;
    int result = multiply(m, n);
    printf("%d x %d = %d\n", m, n, result);
return 0;
}