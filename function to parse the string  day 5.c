#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseString(char* input, struct Student* students, int numStudents) {
    char* token = strtok(input, " ");

    for (int i = 0; i < numStudents; i++) {
        students[i].rollno = atoi(token);
        token = strtok(NULL, " ");
        strncpy(students[i].name, token, sizeof(students[i].name) - 1);
        token = strtok(NULL, " ");
        students[i].marks = atof(token);
        token = strtok(NULL, " ");
    }
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

    // Print the initialized array of structures
    printf("\nInitialized array of structures:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    // Free the allocated memory
    free(students);

    return 0;
}

