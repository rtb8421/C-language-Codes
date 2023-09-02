#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100
int main() {
    char countries[MAX_SIZE][50];
    char capitals[MAX_SIZE][50];
    int n, i;
    char country[50];
    int found = 0;
    printf("Enter number of countries: ", MAX_SIZE);
    scanf("%d", &n);
    printf("Enter countries and their capitals:\n");
    for (i = 0; i < n; i++) {
        scanf("%s %s", countries[i], capitals[i]);
    }
    printf("\nEnter a country name to get its capital: ");
    scanf("%s", country);
    for (i = 0; i < n; i++) {
        if (strcmp(country, countries[i]) == 0) {
            printf("%s\n", capitals[i]);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Capital not found.\n");
    }

}