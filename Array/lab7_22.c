#include <stdio.h>

#define MAX_SIZE 10

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int rows, cols;
    int is_identity = 1;  
    printf("Enter number of rows and columns of matrix (max size is %d): ", MAX_SIZE);
    scanf("%d %d", &rows, &cols);
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == j && matrix[i][j] != 1) {
                is_identity = 0;
                break;
            } else if (i != j && matrix[i][j] != 0) {
                is_identity = 0;
                break;
            }
        }
    }
    if (is_identity) {
        printf("The matrix is an identity matrix.\n");
    } else {
        printf("The matrix is not an identity matrix.\n");
    }
}