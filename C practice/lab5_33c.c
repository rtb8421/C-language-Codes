#include <stdio.h>

int main()
 {
  int rows, spaces, stars;
  
  for (rows = 1; rows <= 5; rows++) {
    for (spaces = 5; spaces >= rows; spaces--) {
      printf(" ");
    }
    for (stars = 1; stars <= rows; stars++) {
      printf("*");
    }
    printf("\n");
  }
return 0;
}