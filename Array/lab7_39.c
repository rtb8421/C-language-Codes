#include <stdio.h>

int find_largest(double arr[], int n) {
    int max_idx = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[max_idx]) {
            max_idx = i;
        }
    }
    return max_idx;
}

int main() {
    double arr[] = {3.2, 2.7, 5.1, 4.9, 1.8};
    int n = sizeof(arr) / sizeof(double);

    int max_idx = find_largest(arr, n);

    printf("The largest value in the array is %f at index %d\n", arr[max_idx], max_idx);

}