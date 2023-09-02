#include <stdio.h>
#define MAX_SIZE 10
int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int m, n, i, j;
    printf("Enter number of rows in matrix (max size is %d): ", MAX_SIZE);
    scanf("%d", &m);
    printf("Enter number of columns in matrix (max size is %d): ", MAX_SIZE);
    scanf("%d", &n);
    printf("Enter elements of matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < m; i++) {
        int sum = 0;
        for (j = 0; j < n; j++) {
            sum += matrix[i][j];
        }
        printf("Sum of row %d: %d\n", i+1, sum);
    }
    for (j = 0; j < n; j++) {
        int sum = 0;
        for (i = 0; i < m; i++) {
            sum += matrix[i][j];
 }
        printf("Sum of column %d: %d\n", j+1, sum);
    }

}