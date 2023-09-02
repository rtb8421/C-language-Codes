#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int array1[MAX_SIZE], array2[MAX_SIZE], sum[MAX_SIZE];
    int i, size;

    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    printf("Enter elements of first array: \n");
    for (i = 0; i < size; i++) {
        scanf("%d", &array1[i]);
    }

    printf("Enter elements of second array: \n");
    for (i = 0; i < size; i++) {
        scanf("%d", &array2[i]);
    }

    for (i = 0; i < size; i++) {
        sum[i] = array1[i] + array2[i];
    }

    printf("Resultant array after addition: ");
    for (i = 0; i < size; i++) {
        printf("%d ", sum[i]);
    }

return 0;
}