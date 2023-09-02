#include <stdio.h>
#include <ctype.h>

int main() {
  char str[100];
  int i, capital_count = 0, small_count = 0, digit_count = 0;

  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);

  for (i = 0; str[i] != '\0'; i++) {
    if (isupper(str[i])) {
      capital_count++;
    } else if (islower(str[i])) {
      small_count++;
    } else if (isdigit(str[i])) {
      digit_count++;
    }
  }

  printf("Total capital letters: %d\n", capital_count);
  printf("Total small letters: %d\n", small_count);
  printf("Total digits: %d\n", digit_count);

return 0;
} 