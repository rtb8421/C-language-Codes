#include <stdio.h>

struct student {
  char name[50];
  int roll;
  char branch[50];
  int age;
  int marks[3];
};

int main() {
  struct student s[3];
  int i, j;

  // Reading information about three students
  for(i = 0; i < 3; i++) {
    printf("\nEnter information for student %d:\n", i+1);
    printf("Name: ");
    scanf("%s", s[i].name);
    printf("Roll Number: ");
    scanf("%d", &s[i].roll);
    printf("Branch: ");
    scanf("%s", s[i].branch);
    printf("Age: ");
    scanf("%d", &s[i].age);
    printf("Enter marks for 3 subjects: \n");
    for(j = 0; j < 3; j++) {
        printf("Marks in subject %d: ", j+1);
        scanf("%d", &s[i].marks[j]);
    }
  }

  // Printing information about three students
  printf("\nInformation about three students:\n");
  for(i = 0; i < 3; i++) {
 printf("\nName: %s\n", s[i].name);
    printf("Roll Number: %d\n", s[i].roll);
    printf("Marks in 3 subjects: ");
    for(j = 0; j < 3; j++) {
        printf("%d ", s[i].marks[j]);
    }
    printf("\n");
  }
  return 0;
}