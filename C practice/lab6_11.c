#include<stdio.h>

int gcd(int,int);

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);}
}
int main()
{
int result = gcd(12, 18);
printf("The GCD of 12 and 18 is %d", result);
return 0;
}