#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char name[50];
} Student;

Student* modifyStructure(Student* student) {
    // Modify the structure members
    student->id += 100;
    printf("Enter the new name: ");
    scanf("%s", student->name);

    return student;
}

int main() {
    Student student;
    Student* modifiedStudent;

    printf("Enter student ID: ");
    scanf("%d", &student.id);
    printf("Enter student name: ");
    scanf("%s", student.name);

    modifiedStudent = modifyStructure(&student);

    printf("\nModified Student:\n");
    printf("ID: %d\n", modifiedStudent->id);
    printf("Name: %s\n", modifiedStudent->name);

    return 0;
}

