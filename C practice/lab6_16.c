#include <stdio.h>

int ap_sum(int first_term, int common_diff, int n) {
    if (n == 1) {
        return first_term;
    } else {
        return (first_term + ap_sum(first_term + common_diff, common_diff, n-1));
    }
}

int main() {
    int first_term, common_diff, n;
    printf("Enter the first term: ");
    scanf("%d", &first_term);
    printf("Enter the common difference: ");
    scanf("%d", &common_diff);
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("The sum of the AP series is %d\n", ap_sum(first_term, common_diff, n));
return 0;
}