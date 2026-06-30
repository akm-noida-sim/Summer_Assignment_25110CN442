// Student Record System using Arrays and Strings
#include <stdio.h>
#include <string.h>

#define MAX 50

// Using separate arrays (no struct)
int    rollNo[MAX];
char   names[MAX][100];
float  marks[MAX];
char   grade[MAX][5];
int    total = 0;

void assignGrade(int i) {
    if      (marks[i] >= 90) strcpy(grade[i], "A+");
    else if (marks[i] >= 80) strcpy(grade[i], "A");
    else if (marks[i] >= 70) strcpy(grade[i], "B");
    else if (marks[i] >= 60) strcpy(grade[i], "C");
    else if (marks[i] >= 50) strcpy(grade[i], "D");
    else                     strcpy(grade[i], "F");
}

void addStudent() {
    if (total >= MAX) {
        printf("Records full!\n");
        return;
    }
    printf("Enter Roll No        : ");
    scanf("%d", &rollNo[total]);
    scanf(" ");
    printf("Enter Name           : ");
    scanf("%[^\n]", names[total]);
    printf("Enter Marks (/ 100)  : ");
    scanf("%f", &marks[total]);
    assignGrade(total);
    total++;
    printf("Student record added!\n");
}

void displayAll() {
    if (total == 0) {
        printf("No records found!\n");
        return;
    }
    int i;
    printf("\n%-10s %-25s %-8s %-6s %-8s\n",
           "Roll No", "Name", "Marks", "Grade", "Result");
    printf("--------------------------------------------------------------\n");
    for (i = 0; i < total; i++) {
        printf("%-10d %-25s %-8.2f %-6s %-8s\n",
               rollNo[i], names[i], marks[i],
               grade[i], marks[i] >= 50 ? "PASS" : "FAIL");
    }
    printf("\n");
}

void searchStudent() {
    int roll, i, found = 0;
    printf("Enter Roll No to search: ");
    scanf("%d", &roll);

    for (i = 0; i < total; i++) {
        if (rollNo[i] == roll) {
            printf("\nRoll No : %d\n", rollNo[i]);
            printf("Name    : %s\n",   names[i]);
            printf("Marks   : %.2f\n", marks[i]);
            printf("Grade   : %s\n",   grade[i]);
            printf("Result  : %s\n\n", marks[i] >= 50 ? "PASS" : "FAIL");
            found = 1;
            break;
        }
    }
    if (!found) printf("Student not found!\n");
}

void showTopper() {
    if (total == 0) {
        printf("No records found!\n");
        return;
    }
    int i, topIdx = 0;
    for (i = 1; i < total; i++) {
        if (marks[i] > marks[topIdx]) topIdx = i;
    }
    printf("\n=== Class Topper ===\n");
    printf("Roll No : %d\n",   rollNo[topIdx]);
    printf("Name    : %s\n",   names[topIdx]);
    printf("Marks   : %.2f\n", marks[topIdx]);
    printf("Grade   : %s\n\n", grade[topIdx]);
}

void passFailCount() {
    int i, pass = 0, fail = 0;
    for (i = 0; i < total; i++) {
        if (marks[i] >= 50) pass++;
        else fail++;
    }
    printf("\nTotal Students : %d\n", total);
    printf("Passed         : %d\n",  pass);
    printf("Failed         : %d\n\n", fail);
}

int main() {
    int choice;

    printf("=== Student Record System (Arrays & Strings) ===\n\n");

    do {
        printf("1. Add Student\n");
        printf("2. Display All\n");
        printf("3. Search Student\n");
        printf("4. Show Topper\n");
        printf("5. Pass/Fail Count\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        printf("\n");

        switch (choice) {
            case 1: addStudent();    break;
            case 2: displayAll();   break;
            case 3: searchStudent(); break;
            case 4: showTopper();   break;
            case 5: passFailCount(); break;
            case 6: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
        printf("\n");

    } while (choice != 6);

    return 0;
}
