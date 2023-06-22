#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseString(const char* input, struct Student* students, int numStudents) {
    const char* delimiter = " ";
    char* token = strtok(input, delimiter);

    for (int i = 0; i < numStudents; i++) {
        students[i].rollno = atoi(token);
        token = strtok(NULL, delimiter);
        strncpy(students[i].name, token, sizeof(students[i].name) - 1);
        token = strtok(NULL, delimiter);
        students[i].marks = atof(token);
        token = strtok(NULL, delimiter);
    }
}

void displayArray(const struct Student* students, int numStudents) {
    printf("Array of structures:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
}

int searchByName(const struct Student* students, int numStudents, const char* name) {
    for (int i = 0; i < numStudents; i++) {
        if (strcmp(students[i].name, name) == 0) {
            return i;  // Found the student with the given name, return the index
        }
    }
    return -1;  // Student with the given name not found
}

int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);
    getchar();  // To consume the newline character

    // Allocate memory for the array of structures
    struct Student* students = (struct Student*)malloc(numStudents * sizeof(struct Student));

    printf("Enter the input string:\n");
    char input[100];
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';  // Remove the trailing newline character

    parseString(input, students, numStudents);

    displayArray(students, numStudents);

    char searchName[20];
    printf("Enter the name to search: ");
    scanf("%s", searchName);

    int searchIndex = searchByName(students, numStudents, searchName);
    if (searchIndex != -1) {
        printf("Student '%s' found at index %d.\n", searchName, searchIndex);
        printf("Roll No: %d\n", students[searchIndex].rollno);
        printf("Name: %s\n", students[searchIndex].name);
        printf("Marks: %.2f\n", students[searchIndex].marks);
    } else {
        printf("Student '%s' not found.\n", searchName);
    }

    // Free the allocated memory
    free(students);

    return 0;
}

