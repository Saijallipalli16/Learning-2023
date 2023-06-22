#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    float marks;
} Student;

void readStudentData(Student* students, int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Marks: ");
        scanf("%f", &students[i].marks);

        printf("\n");
    }
}

void writeStudentData(Student* students, int n) {
    printf("Student data:\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
}

float computeAverageMarks(Student* students, int n) {
    float totalMarks = 0.0;
    for (int i = 0; i < n; i++) {
        totalMarks += students[i].marks;
    }
    return totalMarks / n;
}

void printStudentsAboveBelowAverage(Student* students, int n, float averageMarks) {
    printf("Students scoring above average marks:\n");
    for (int i = 0; i < n; i++) {
        if (students[i].marks > averageMarks) {
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            printf("\n");
        }
    }

    printf("Students scoring below average marks:\n");
    for (int i = 0; i < n; i++) {
        if (students[i].marks < averageMarks) {
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            printf("\n");
        }
    }
}

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Dynamically allocate memory for 'n' students
    Student *students = (Student*) malloc(n * sizeof(Student));

    if (students == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1;
    }

    printf("\n");

    // Read data for each student
    readStudentData(students, n);

    // Display the stored data
    printf("Student data:\n");
    writeStudentData(students, n);

    // Compute average marks
    float averageMarks = computeAverageMarks(students, n);
    printf("Average marks: %.2f\n\n", averageMarks);

    // Print students above and below average marks
    printStudentsAboveBelowAverage(students, n, averageMarks);

    // Free dynamically allocated memory
    free(students);

    return 0;
}

