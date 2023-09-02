#include <stdio.h>
int binarySearch(int arr[], int left, int right, int target) {
    if (left > right) {
        return -1;
    }
    int mid = (left + right) / 2;
    if (arr[mid] == target) {
        return mid;
    } else if (target < arr[mid]) {
        return binarySearch(arr, left, mid - 1, target);
    } else {
        return binarySearch(arr, mid + 1, right, target);
    }
}
int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int size = sizeof(arr) / sizeof(int);

    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int target = 5;
    int index = binarySearch(arr, 0, size - 1, target);
    if (index != -1) {
        printf("%d found at index %d\n", target, index);
    } else {
  printf("%d not found in array\n", target);
    }
    return 0;
}