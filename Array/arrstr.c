#include <stdio.h>

struct student {
    char name[50];
    int roll;
    char branch[10];
    int age;
    int marks[3];
};

int main() {
    int n, i, j, total;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct student s[n];
    
    // Reading in student information and marks
    for (i = 0; i < n; i++) {
        printf("\nEnter the details of student %d:\n", i+1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll Number: ");
        scanf("%d", &s[i].roll);
        printf("Branch: ");
        scanf("%s", s[i].branch);
        printf("Age: ");
        scanf("%d", &s[i].age);
        printf("Enter the marks of student %d for 3 subjects: ", i+1);
        for (j = 0; j < 3; j++) {
            scanf("%d", &s[i].marks[j]);
        }
    }

   printf("\nStudent Details:\n");
    for (i = 0; i < n; i++) {
        printf("\nName: %s", s[i].name);
        printf("\nRoll Number: %d", s[i].roll);
        printf("\nMarks Obtained: ");
        total = 0;
        for (j = 0; j < 3; j++) {
            printf("%d ", s[i].marks[j]);
            total += s[i].marks[j];
        }
        printf("\nTotal Marks Obtained: %d\n", total);
    }
    return 0;
}