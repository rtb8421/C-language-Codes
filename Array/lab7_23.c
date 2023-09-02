#include <stdio.h>
#define MAX_SIZE 100
int main() {
    int arr[MAX_SIZE];
    int size, choice, position, new_element;
    printf("Enter array size (max size is %d): ", MAX_SIZE);
    scanf("%d", &size);
    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter choice (1 for insert or 2 for delete): ");
    scanf("%d", &choice);
    if (choice == 1) {
        printf("\nEnter position to insert new element:", size);
        scanf("%d", &position);
        printf("Enter new element: ");
        scanf("%d", &new_element);
        for (int i = size - 1; i >= position; i--) {
            arr[i+1] = arr[i];
        arr[position] = new_element;
        size++;
    }
    if (choice == 2) {
        printf("\nEnter position to delete element (0-%d): ", size-1);
        scanf("%d", &position);
    }
        for (int i = position; i < size - 1; i++) {
            arr[i] = arr[i+1];
        }
        size--;
    }
    else {
        printf("\nInvalid choice.\n");
        return 1;
    }
    printf("\nUpdated array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
 }