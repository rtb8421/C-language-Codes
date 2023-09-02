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
        int temp = matrix[i][i];
        matrix[i][i] = matrix[i][n-1-i];
        matrix[i][n-1-i] = temp;
    }
    printf("Matrix with main and secondary diagonals interchanged:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}