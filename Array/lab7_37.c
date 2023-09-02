#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int fmax(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int (*func_ptr)(int, int); 
    int a = 12, b = 18;

    func_ptr = gcd;
    printf("GCD of %d and %d is %d\n", a, b, func_ptr(a, b));

    func_ptr = fmax;
    printf("Maximum of %d and %d is %d\n", a, b, func_ptr(a, b));

}