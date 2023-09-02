#include <stdio.h>

int findMin(int arr[], int size) {
    if (size == 1) {
        return arr[0];
    } else {
        int temp = findMin(arr, size-1);
        return (arr[size-1] < temp) ? arr[size-1] : temp;
    }
}

int main() {
    int arr[] = {3, 7, 1, 9, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min = findMin(arr, size);
    printf("The minimum element is %d", min);

}