#include <stdio.h>
int main() {
  int rows, cols, i, j, count = 0;
  printf("Enter the number of rows and columns of the matrix: ");
  scanf("%d %d", &rows, &cols);
  int matrix[rows][cols];
  printf("Enter the elements of the matrix:\n");
  for(i = 0; i < rows; i++) {
    for(j = 0; j < cols; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }
  for(i = 0; i < rows; i++) {
    for(j = 0; j < cols; j++) {
      if(matrix[i][j] == 0) {
        count++;
      }
    }
  }
  
  if(count > ((rows * cols) / 2)) {
    printf("The matrix is a sparse matrix.\n");
  } else {
    printf("The matrix is not a sparse matrix.\n");
  }
}