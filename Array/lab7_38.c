#include <stdio.h>
#include <string.h>

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void permute(char *str, int start, int end) {
    if (start == end) {
        printf("%s\n", str);
    } else {
        for (int i = start; i <= end; i++) {
            swap(str + start, str + i);
            permute(str, start + 1, end);
            swap(str + start, str + i);
        }
    }
}

int main() {
    char str[] = "RTB";
    int n = strlen(str);

    printf("All permutations of %s are:\n", str);
    permute(str, 0, n - 1);

}