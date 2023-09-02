#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    int i, sum = 0;
    float avg;

    printf("Enter %d elements of the array: \n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = (float)sum / n;

    printf("Sum of array elements = %d\n", sum);
    printf("Average of array elements = %.2f\n", avg);

return 0;
}