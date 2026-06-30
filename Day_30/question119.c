#include <stdio.h>
#include <string.h>

#define MAX 30

//  Mini Employee Management System


// Using separate arrays (no struct)
int   empId[MAX];
char  empName[MAX][100];
char  dept[MAX][50];
float salary[MAX];
int   total = 0;

void addEmployee() {
    if (total >= MAX) {
        printf("Records full!\n");
        return;
    }
    printf("Enter Employee ID  : ");
    scanf("%d", &empId[total]);
    scanf(" ");
    printf("Enter Name         : ");
    scanf("%[^\n]", empName[total]);
    printf("Enter Department   : ");
    scanf("%s", dept[total]);
    printf("Enter Salary (Rs.) : ");
    scanf("%f", &salary[total]);
    total++;
    printf("Employee added successfully!\n");
}

void displayAll() {
    if (total == 0) {
        printf("No records found!\n");
        return;
    }
    int i;
    printf("\n%-8s %-25s %-15s %-12s\n",
           "EmpID", "Name", "Department", "Salary");
    printf("------------------------------------------------------\n");
    for (i = 0; i < total; i++) {
        printf("%-8d %-25s %-15s Rs.%.2f\n",
               empId[i], empName[i], dept[i], salary[i]);
    }
    printf("\n");
}

void searchEmployee() {
    int id, i, found = 0;
    printf("Enter Employee ID: ");
    scanf("%d", &id);

    for (i = 0; i < total; i++) {
        if (empId[i] == id) {
            printf("\nID         : %d\n",      empId[i]);
            printf("Name       : %s\n",        empName[i]);
            printf("Department : %s\n",        dept[i]);
            printf("Salary     : Rs. %.2f\n\n", salary[i]);
            found = 1;
            break;
        }
    }
    if (!found) printf("Employee not found!\n");
}

void highestSalary() {
    if (total == 0) {
        printf("No records found!\n");
        return;
    }
    int i, maxIdx = 0;
    for (i = 1; i < total; i++) {
        if (salary[i] > salary[maxIdx]) maxIdx = i;
    }
    printf("\nHighest Salary:\n");
    printf("ID     : %d\n",         empId[maxIdx]);
    printf("Name   : %s\n",         empName[maxIdx]);
    printf("Salary : Rs. %.2f\n\n", salary[maxIdx]);
}

void deptWiseSearch() {
    char dname[50];
    int i, found = 0;
    printf("Enter Department: ");
    scanf("%s", dname);

    printf("\nEmployees in [%s] department:\n", dname);
    printf("----------------------------------------------\n");
    for (i = 0; i < total; i++) {
        if (strcmp(dept[i], dname) == 0) {
            printf("%-8d %-25s Rs.%.2f\n",
                   empId[i], empName[i], salary[i]);
            found = 1;
        }
    }
    if (!found) printf("No employees in this department!\n");
    printf("\n");
}

void deleteEmployee() {
    int id, i, j, found = 0;
    printf("Enter Employee ID to delete: ");
    scanf("%d", &id);

    for (i = 0; i < total; i++) {
        if (empId[i] == id) {
            for (j = i; j < total - 1; j++) {
                empId[j] = empId[j + 1];
                strcpy(empName[j], empName[j + 1]);
                strcpy(dept[j], dept[j + 1]);
                salary[j] = salary[j + 1];
            }
            total--;
            printf("Employee deleted successfully!\n");
            found = 1;
            break;
        }
    }
    if (!found) printf("Employee not found!\n");
}

int main() {
    int choice;

    printf("=== Mini Employee Management System ===\n\n");

    do {
        printf("1. Add Employee\n");
        printf("2. Display All\n");
        printf("3. Search Employee\n");
        printf("4. Highest Salary\n");
        printf("5. Department-wise Employees\n");
        printf("6. Delete Employee\n");
        printf("7. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        printf("\n");

        switch (choice) {
            case 1: addEmployee();    break;
            case 2: displayAll();     break;
            case 3: searchEmployee(); break;
            case 4: highestSalary();  break;
            case 5: deptWiseSearch(); break;
            case 6: deleteEmployee(); break;
            case 7: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
        printf("\n");

    } while (choice != 7);

    return 0;
}
