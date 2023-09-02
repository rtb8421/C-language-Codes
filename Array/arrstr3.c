#include <stdio.h>

struct Student {
    char name[50];
    int age;
    char branch[50];
    int roll;
    float marks[3];
};
void read(struct Student* s) {

    for(int i = 0; i < 3; i++) {
    printf("Enter student name: ");
    scanf("%s", s->name);

    printf("Enter student age: ");
    scanf("%d", &s->age);

    printf("Enter student branch: ");
    scanf("%s", s->branch);

    printf("Enter student roll: ");
    scanf("%d", &s->roll);

    for(int j = 0; j < 3; j++) {
        printf("Marks in subject %d: ", j+1);
        scanf("%d", &s[i].marks[j]);
    }
    }
}
void write(struct Student s) {
    for(int i = 0; i < 3; i++) {
    printf("Roll No: %d\n", s.roll);
    printf("Name: %s\n", s.name);
  float total = s.marks[0] + s.marks[1] + s.marks[2];
  for(int j = 0; j < 3; j++) {
    printf("Total Marks: %.2f\n", total);
  }
}
}

int main() {
    struct Student s;
    read(&s);
    write(s);

return 0;
}