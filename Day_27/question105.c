#include <stdio.h>
#include <string.h>

#define MAX 50
// Student Record Management System
struct Student 
{
    int rollNo;
    char name[100];
    char branch[50];
    float cgpa;
};

struct Student students[MAX];
int total = 0;

void addStudent() {
    if (total >= MAX) {
        printf("Records full!\n");
        return;
    }
    printf("Enter Roll No : ");
    scanf("%d", &students[total].rollNo);
    scanf(" ");
    printf("Enter Name    : ");
    scanf("%[^\n]", students[total].name);
    printf("Enter Branch  : ");
    scanf("%s", students[total].branch);
    printf("Enter CGPA    : ");
    scanf("%f", &students[total].cgpa);
    total++;
    printf("Student added successfully!\n");
}

void displayAll() {
    if (total == 0) {
        printf("No records found!\n");
        return;
    }
    int i;
    printf("\n%-10s %-20s %-15s %-6s\n", "Roll No", "Name", "Branch", "CGPA");
    printf("-------------------------------------------------------\n");
    for (i = 0; i < total; i++) {
        printf("%-10d %-20s %-15s %.2f\n",
               students[i].rollNo, students[i].name,
               students[i].branch, students[i].cgpa);
    }
    printf("\n");
}

void searchStudent() {
    int roll, i, found = 0;
    printf("Enter Roll No to search: ");
    scanf("%d", &roll);

    for (i = 0; i < total; i++) {
        if (students[i].rollNo == roll) {
            printf("\nRoll No : %d\n", students[i].rollNo);
            printf("Name    : %s\n", students[i].name);
            printf("Branch  : %s\n", students[i].branch);
            printf("CGPA    : %.2f\n\n", students[i].cgpa);
            found = 1;
            break;
        }
    }
    if (!found) printf("Student not found!\n");
}

void deleteStudent() {
    int roll, i, j, found = 0;
    printf("Enter Roll No to delete: ");
    scanf("%d", &roll);

    for (i = 0; i < total; i++) {
        if (students[i].rollNo == roll) {
            for (j = i; j < total - 1; j++) {
                students[j] = students[j + 1];
            }
            total--;
            printf("Student deleted successfully!\n");
            found = 1;
            break;
        }
    }
    if (!found) printf("Student not found!\n");
}

int main() {
    int choice;

    printf("=== Student Record Management System ===\n\n");

    do {
        printf("1. Add Student\n");
        printf("2. Display All\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        printf("\n");

        switch (choice) {
            case 1: addStudent();    break;
            case 2: displayAll();   break;
            case 3: searchStudent(); break;
            case 4: deleteStudent(); break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
        printf("\n");

    } while (choice != 5);

    return 0;
}
