#include <stdio.h>

double gp_sum(double first_term, double common_ratio, int n) {
    if (n == 1) {
        return first_term;
    } else {
        return (first_term + gp_sum(first_term * common_ratio, common_ratio, n-1));
    }
}

int main() {
    double first_term, common_ratio;
    int n;
    printf("Enter the first term: ");
    scanf("%lf", &first_term);
    printf("Enter the common ratio: ");
    scanf("%lf", &common_ratio);
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("The sum of the GP series is %lf\n", gp_sum(first_term, common_ratio, n));
return 0;
}