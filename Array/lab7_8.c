#include <stdio.h>

void bubble_sort(int arr[], int size) {
  int i, j, temp;

  for (i = 0; i < size - 1; i++) {
    for (j = 0; j < size - i - 1; j++) {
      if (arr[j] > arr[j+1]) {
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
}

int main() {
  int arr[] = {64, 34, 25, 12, 22, 11, 90};
  int size = sizeof(arr)/sizeof(arr[0]);

  printf("Unsorted array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }

  bubble_sort(arr, size);

  printf("\nSorted array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }

 return 0;
}