//C program for file handling for entry and reading data input.
/*
//C program for data text handling 
Author: Axel Chase 
Registration number: 3478098
Date : 26/10/2024
//preprocessor directive - scanf(),printf()
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int marks;
} Student;

void addStudentData(const char *filename, int n) {
    FILE *file = fopen(filename, "ab");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    Student students[n];
    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
    }

    fwrite(students, sizeof(Student), n, file);
    fclose(file);
}

void readStudentData(const char *filename) {
    FILE *file = fopen(filename, "rb");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    Student student;
    while (fread(&student, sizeof(Student), 1, file)) {
        printf("Name: %s, Marks: %d\n", student.name, student.marks);
    }

    fclose(file);
}

int main() {
    const char *filename = "students.data";
    int choice, n;

    while (1) {
        printf("1. Enter the student data\n");
        printf("2. Read the student data\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter number of students: ");
                scanf("%d", &n);
                addStudentData(filename, n);
                break;
            case 2:
                readStudentData(filename);
                break;
            case 3:
                exit(1);
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
