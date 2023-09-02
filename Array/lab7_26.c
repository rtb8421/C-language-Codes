#include <stdio.h>
#define MAX_SIZE 10
int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int n, i, j;
    int odd_count = 0, even_count = 0;
    printf("Enter size of matrix (max size is %d): ", MAX_SIZE);
    scanf("%d", &n);
    printf("Enter elements of matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (matrix[i][j] % 2 == 0) {
                even_count++;
            } else {
                odd_count++;
            }
        }
    }
    printf("Frequency of odd numbers: %d\n", odd_count);
    printf("Frequency of even numbers: %d\n", even_count);

}