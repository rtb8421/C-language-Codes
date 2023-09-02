#include <stdio.h>

int main() {
    int m, n, i, j;
    int a[10][10], b[10][10], c[10][10];
    
    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &m, &n);
    printf("Enter the elements of the first matrix: ");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of the second matrix: ");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &b[i][j]);
        }
    } 
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Resultant matrix after addition:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}