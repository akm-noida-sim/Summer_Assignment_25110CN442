// Complete Mini Project: Student Grade Management System
// Uses: Arrays + Strings + Functions (all combined)

#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 50
#define MAX_SUBJECTS  5

// ---- Global Arrays ----
int   rollNo[MAX_STUDENTS];
char  names[MAX_STUDENTS][100];
int   marks[MAX_STUDENTS][MAX_SUBJECTS];
int   totalMarks[MAX_STUDENTS];
float percentage[MAX_STUDENTS];
char  grade[MAX_STUDENTS][5];
char  result[MAX_STUDENTS][10];
int   total = 0;

char subjects[MAX_SUBJECTS][20] = {
    "Mathematics",
    "Physics",
    "Chemistry",
    "English",
    "C Programming"
};

// ---- Function: Calculate Grade ----
void calculateGrade(int idx) {
    int j, sum = 0, failed = 0;

    for (j = 0; j < MAX_SUBJECTS; j++) {
        sum += marks[idx][j];
        if (marks[idx][j] < 33) failed++;
    }

    totalMarks[idx]  = sum;
    percentage[idx]  = (float)sum / (MAX_SUBJECTS * 100) * 100;

    if (failed > 0) {
        strcpy(grade[idx],  "F");
        strcpy(result[idx], "FAIL");
    } else {
        strcpy(result[idx], "PASS");
        if      (percentage[idx] >= 90) strcpy(grade[idx], "A+");
        else if (percentage[idx] >= 80) strcpy(grade[idx], "A");
        else if (percentage[idx] >= 70) strcpy(grade[idx], "B");
        else if (percentage[idx] >= 60) strcpy(grade[idx], "C");
        else if (percentage[idx] >= 50) strcpy(grade[idx], "D");
        else                            strcpy(grade[idx], "E");
    }
}

// ---- Function: Add Student ----
void addStudent() {
    if (total >= MAX_STUDENTS) {
        printf("Records full!\n");
        return;
    }
    int j;
    printf("Enter Roll No : ");
    scanf("%d", &rollNo[total]);
    scanf(" ");
    printf("Enter Name    : ");
    scanf("%[^\n]", names[total]);

    printf("Enter marks for each subject (out of 100):\n");
    for (j = 0; j < MAX_SUBJECTS; j++) {
        printf("  %-15s: ", subjects[j]);
        scanf("%d", &marks[total][j]);
    }

    calculateGrade(total);
    total++;
    printf("Student added successfully!\n");
}

// ---- Function: Display All Students ----
void displayAll() {
    if (total == 0) {
        printf("No records found!\n");
        return;
    }
    int i;
    printf("\n%-8s %-20s %-8s %-10s %-6s %-8s\n",
           "Roll No", "Name", "Total", "Percent", "Grade", "Result");
    printf("------------------------------------------------------------------\n");
    for (i = 0; i < total; i++) {
        printf("%-8d %-20s %-8d %-10.2f %-6s %-8s\n",
               rollNo[i], names[i], totalMarks[i],
               percentage[i], grade[i], result[i]);
    }
    printf("\n");
}

// ---- Function: Generate Marksheet ----
void generateMarksheet() {
    int roll, i, j, found = 0;
    printf("Enter Roll No: ");
    scanf("%d", &roll);

    for (i = 0; i < total; i++) {
        if (rollNo[i] == roll) {
            printf("\n========================================\n");
            printf("       STUDENT MARKSHEET\n");
            printf("========================================\n");
            printf("Roll No    : %d\n", rollNo[i]);
            printf("Name       : %s\n", names[i]);
            printf("----------------------------------------\n");
            for (j = 0; j < MAX_SUBJECTS; j++) {
                printf("%-15s : %3d / 100\n", subjects[j], marks[i][j]);
            }
            printf("----------------------------------------\n");
            printf("Total      : %d / %d\n", totalMarks[i], MAX_SUBJECTS * 100);
            printf("Percentage : %.2f%%\n",  percentage[i]);
            printf("Grade      : %s\n",      grade[i]);
            printf("Result     : %s\n",      result[i]);
            printf("========================================\n\n");
            found = 1;
            break;
        }
    }
    if (!found) printf("Student not found!\n");
}

// ---- Function: Find Topper ----
void findTopper() {
    if (total == 0) {
        printf("No records found!\n");
        return;
    }
    int i, topIdx = 0;
    for (i = 1; i < total; i++) {
        if (percentage[i] > percentage[topIdx]) topIdx = i;
    }
    printf("\n=== Class Topper ===\n");
    printf("Roll No    : %d\n",   rollNo[topIdx]);
    printf("Name       : %s\n",   names[topIdx]);
    printf("Total      : %d\n",   totalMarks[topIdx]);
    printf("Percentage : %.2f%%\n\n", percentage[topIdx]);
}

// ---- Function: Pass/Fail Statistics ----
void statistics() {
    if (total == 0) {
        printf("No records found!\n");
        return;
    }
    int i, pass = 0, fail = 0;
    float sum = 0;

    for (i = 0; i < total; i++) {
        if (strcmp(result[i], "PASS") == 0) pass++;
        else fail++;
        sum += percentage[i];
    }

    printf("\n=== Class Statistics ===\n");
    printf("Total Students : %d\n",   total);
    printf("Passed         : %d\n",   pass);
    printf("Failed         : %d\n",   fail);
    printf("Class Average  : %.2f%%\n", sum / total);
    printf("Pass Rate      : %.2f%%\n\n", (float)pass / total * 100);
}

// ---- Function: Search Student ----
void searchStudent() {
    int roll, i, found = 0;
    printf("Enter Roll No: ");
    scanf("%d", &roll);

    for (i = 0; i < total; i++) {
        if (rollNo[i] == roll) {
            printf("\nRoll No    : %d\n",   rollNo[i]);
            printf("Name       : %s\n",     names[i]);
            printf("Percentage : %.2f%%\n", percentage[i]);
            printf("Grade      : %s\n",     grade[i]);
            printf("Result     : %s\n\n",   result[i]);
            found = 1;
            break;
        }
    }
    if (!found) printf("Student not found!\n");
}

// ---- Function: Delete Student ----
void deleteStudent() {
    int roll, i, j, k, found = 0;
    printf("Enter Roll No to delete: ");
    scanf("%d", &roll);

    for (i = 0; i < total; i++) {
        if (rollNo[i] == roll) {
            for (j = i; j < total - 1; j++) {
                rollNo[j]      = rollNo[j + 1];
                totalMarks[j]  = totalMarks[j + 1];
                percentage[j]  = percentage[j + 1];
                strcpy(names[j],  names[j + 1]);
                strcpy(grade[j],  grade[j + 1]);
                strcpy(result[j], result[j + 1]);
                for (k = 0; k < MAX_SUBJECTS; k++) {
                    marks[j][k] = marks[j + 1][k];
                }
            }
            total--;
            printf("Record deleted successfully!\n");
            found = 1;
            break;
        }
    }
    if (!found) printf("Student not found!\n");
}

// ---- Main Function ----
int main() {
    int choice;

    printf("=============================================\n");
    printf("    STUDENT GRADE MANAGEMENT SYSTEM\n");
    printf("  (Mini Project: Arrays + Strings + Functions)\n");
    printf("=============================================\n\n");

    do {
        printf("1.  Add Student\n");
        printf("2.  Display All Students\n");
        printf("3.  Generate Marksheet\n");
        printf("4.  Search Student\n");
        printf("5.  Find Topper\n");
        printf("6.  Class Statistics\n");
        printf("7.  Delete Student\n");
        printf("8.  Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        printf("\n");

        switch (choice) {
            case 1: addStudent();       break;
            case 2: displayAll();       break;
            case 3: generateMarksheet(); break;
            case 4: searchStudent();    break;
            case 5: findTopper();       break;
            case 6: statistics();       break;
            case 7: deleteStudent();    break;
            case 8: printf("Thank you! Goodbye.\n"); break;
            default: printf("Invalid choice! Try again.\n");
        }
        printf("\n");

    } while (choice != 8);

    return 0;
}
