#include <stdio.h>
int linearSearch(int arr[], int size, int target, int index) {
    if (index >= size) {
        return -1;
    }
    if (arr[index] == target) {
        return index;
    }
    return linearSearch(arr, size, target, index + 1);
}
int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int size = sizeof(arr) / sizeof(int);
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int target = 9;
    int index = linearSearch(arr, size, target, 0);
    if (index != -1) {
        printf("%d found at index %d\n", target, index);
    } else {
        printf("%d not found in array\n", target);
    }
  target = 6;
    index = linearSearch(arr, size, target, 0);
    if (index != -1) {
        printf("%d found at index %d\n", target, index);
    } else {
        printf("%d not found in array\n", target);
    }
}