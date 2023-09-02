#include <stdio.h>

int sum_array(int arr[], int n) {
  int sum = 0, i;
  for(i = 0; i < n; i++) {
    sum += arr[i];
  }
  return sum;
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  int sum = sum_array(arr, n);
  printf("Sum of array elements = %d\n", sum);

}