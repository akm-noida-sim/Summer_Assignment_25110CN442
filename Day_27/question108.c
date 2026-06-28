#include <stdio.h>
#include <string.h>

#define MAX      50
#define SUBJECTS  5
//  Marksheet Generation System

struct Student {
    int rollNo;
    char name[100];
    int marks[SUBJECTS];
    int total;
    float percentage;
    char grade[5];
    char result[10];
};

char subjects[SUBJECTS][30] = {
    "Mathematics",
    "Physics",
    "Chemistry",
    "English",
    "C Programming"
};

struct Student students[MAX];
int total = 0;

void calculateResult(int i) {
    int j, sum = 0, failed = 0;

    for (j = 0; j < SUBJECTS; j++) {
        sum += students[i].marks[j];
        if (students[i].marks[j] < 33) failed++;
    }

    students[i].total      = sum;
    students[i].percentage = (float)sum / (SUBJECTS * 100) * 100;

    if (failed > 0) {
        strcpy(students[i].grade, "F");
        strcpy(students[i].result, "FAIL");
    } else {
        strcpy(students[i].result, "PASS");
        if      (students[i].percentage >= 90) strcpy(students[i].grade, "A+");
        else if (students[i].percentage >= 80) strcpy(students[i].grade, "A");
        else if (students[i].percentage >= 70) strcpy(students[i].grade, "B");
        else if (students[i].percentage >= 60) strcpy(students[i].grade, "C");
        else if (students[i].percentage >= 50) strcpy(students[i].grade, "D");
        else                                   strcpy(students[i].grade, "E");
    }
}

void addStudent() {
    if (total >= MAX) {
        printf("Records full!\n");
        return;
    }
    int j;
    printf("Enter Roll No : ");
    scanf("%d", &students[total].rollNo);
    scanf(" ");
    printf("Enter Name    : ");
    scanf("%[^\n]", students[total].name);

    printf("Enter marks for each subject (out of 100):\n");
    for (j = 0; j < SUBJECTS; j++) {
        printf("  %-15s: ", subjects[j]);
        scanf("%d", &students[total].marks[j]);
    }

    calculateResult(total);
    total++;
    printf("Student added successfully!\n");
}

void generateMarksheet() {
    int roll, i, j, found = 0;
    printf("Enter Roll No: ");
    scanf("%d", &roll);

    for (i = 0; i < total; i++) {
        if (students[i].rollNo == roll) {
            printf("\n========================================\n");
            printf("           MARK SHEET\n");
            printf("========================================\n");
            printf("Roll No    : %d\n", students[i].rollNo);
            printf("Name       : %s\n", students[i].name);
            printf("----------------------------------------\n");
            for (j = 0; j < SUBJECTS; j++) {
                printf("%-15s : %3d / 100\n",
                       subjects[j], students[i].marks[j]);
            }
            printf("----------------------------------------\n");
            printf("Total      : %d / %d\n", students[i].total, SUBJECTS * 100);
            printf("Percentage : %.2f%%\n", students[i].percentage);
            printf("Grade      : %s\n", students[i].grade);
            printf("Result     : %s\n", students[i].result);
            printf("========================================\n\n");
            found = 1;
            break;
        }
    }
    if (!found) printf("Student not found!\n");
}

void displayAll() {
    if (total == 0) {
        printf("No records found!\n");
        return;
    }
    int i;
    printf("\n%-10s %-20s %-8s %-10s %-6s %-8s\n",
           "Roll No", "Name", "Total", "Percent", "Grade", "Result");
    printf("------------------------------------------------------------------\n");
    for (i = 0; i < total; i++) {
        printf("%-10d %-20s %-8d %-10.2f %-6s %-8s\n",
               students[i].rollNo, students[i].name,
               students[i].total, students[i].percentage,
               students[i].grade, students[i].result);
    }
    printf("\n");
}

int main() {
    int choice;

    printf("=== Marksheet Generation System ===\n\n");

    do {
        printf("1. Add Student\n");
        printf("2. Generate Marksheet\n");
        printf("3. Display All\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        printf("\n");

        switch (choice) {
            case 1: addStudent();        break;
            case 2: generateMarksheet(); break;
            case 3: displayAll();        break;
            case 4: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
        printf("\n");

    } while (choice != 4);

    return 0;
}
