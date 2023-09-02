#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("Size of char: %lu bytes\n", sizeof(char));
    printf("Size of short: %lu bytes\n", sizeof(short));
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of long: %lu bytes\n", sizeof(long));
    printf("Size of long long: %lu bytes\n", sizeof(long long));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Size of long double: %lu bytes\n", sizeof(long double));
    printf("\n");
    printf("Range of char: %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("Range of short: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("Range of int: %d to %d\n", INT_MIN, INT_MAX);
    printf("Range of long: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("Range of long long: %lld to %lld\n", LLONG_MIN, LLONG_MAX);
    printf("Range of float: %e to %e\n", FLT_MIN, FLT_MAX);
    printf("Range of double: %e to %e\n", DBL_MIN, DBL_MAX);
    printf("Range of long double: %Le to %Le\n", LDBL_MIN, LDBL_MAX);
    return 0;
}
