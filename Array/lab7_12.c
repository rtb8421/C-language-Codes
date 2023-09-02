#include <stdio.h>
#include <string.h>

int main() {
  char str[100];

  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);

  // Remove newline character from input
  str[strcspn(str, "\n")] = '\0';

  int len = strlen(str);
  int i;

  // Print first character of first word
  if (str[0] != ' ') {
    printf("%c", str[0]);
  }
  // Iterate through string and print first character of each word
  for (i = 1; i < len; i++) {
    if (str[i] != ' ' && str[i-1] == ' ') {
      printf("%c", str[i]);
    }
  }

  printf("\n");

    return 0;
}