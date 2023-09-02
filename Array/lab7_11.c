#include <stdio.h>
#include <string.h>

void reverse_string(char *str) {
  int len = strlen(str);
  int i;

  for (i = 0; i < len / 2; i++) {
    str[i] ^= str[len - 1 - i];
    str[len - 1 - i] ^= str[i];
    str[i] ^= str[len - 1 - i];
  }
}

int main() {
  char str[100];

  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);

  str[strcspn(str, "\n")] = '\0';

  printf("Original string: %s\n", str);

  reverse_string(str);

  printf("Reversed string: %s\n", str);

return 0;
}