#include <stdio.h>
#include <string.h>

#define MAX 50
//- Salary Management System

struct Employee {
    int empId;
    char name[100];
    float basicSalary;
    float hra;          // 40% of basic
    float da;           // 20% of basic
    float ta;           // 10% of basic
    float pf;           // 12% of basic (deduction)
    float grossSalary;
    float netSalary;
};

struct Employee emp[MAX];
int total = 0;

void calculateSalary(int i) {
    emp[i].hra         = 0.40 * emp[i].basicSalary;
    emp[i].da          = 0.20 * emp[i].basicSalary;
    emp[i].ta          = 0.10 * emp[i].basicSalary;
    emp[i].pf          = 0.12 * emp[i].basicSalary;
    emp[i].grossSalary = emp[i].basicSalary + emp[i].hra + emp[i].da + emp[i].ta;
    emp[i].netSalary   = emp[i].grossSalary - emp[i].pf;
}

void addEmployee() {
    if (total >= MAX) {
        printf("Records full!\n");
        return;
    }
    printf("Enter Employee ID   : ");
    scanf("%d", &emp[total].empId);
    scanf(" ");
    printf("Enter Name          : ");
    scanf("%[^\n]", emp[total].name);
    printf("Enter Basic Salary  : Rs. ");
    scanf("%f", &emp[total].basicSalary);

    calculateSalary(total);
    total++;
    printf("Employee added successfully!\n");
}

void generateSalarySlip() {
    int id, i, found = 0;
    printf("Enter Employee ID: ");
    scanf("%d", &id);

    for (i = 0; i < total; i++) {
        if (emp[i].empId == id) {
            printf("\n==============================\n");
            printf("         SALARY SLIP\n");
            printf("==============================\n");
            printf("Employee ID   : %d\n", emp[i].empId);
            printf("Name          : %s\n", emp[i].name);
            printf("------------------------------\n");
            printf("Basic Salary  : Rs. %8.2f\n", emp[i].basicSalary);
            printf("HRA    (40%%) : Rs. %8.2f\n", emp[i].hra);
            printf("DA     (20%%) : Rs. %8.2f\n", emp[i].da);
            printf("TA     (10%%) : Rs. %8.2f\n", emp[i].ta);
            printf("------------------------------\n");
            printf("Gross Salary  : Rs. %8.2f\n", emp[i].grossSalary);
            printf("PF     (12%%) : Rs. %8.2f  (-)\n", emp[i].pf);
            printf("------------------------------\n");
            printf("Net Salary    : Rs. %8.2f\n", emp[i].netSalary);
            printf("==============================\n\n");
            found = 1;
            break;
        }
    }
    if (!found) printf("Employee not found!\n");
}

void displayAll() {
    if (total == 0) {
        printf("No records found!\n");
        return;
    }
    int i;
    printf("\n%-8s %-20s %-12s %-12s %-12s\n",
           "ID", "Name", "Basic", "Gross", "Net Salary");
    printf("--------------------------------------------------------------\n");
    for (i = 0; i < total; i++) {
        printf("%-8d %-20s %-12.2f %-12.2f %.2f\n",
               emp[i].empId, emp[i].name,
               emp[i].basicSalary, emp[i].grossSalary, emp[i].netSalary);
    }
    printf("\n");
}

int main() {
    int choice;

    printf("=== Salary Management System ===\n\n");

    do {
        printf("1. Add Employee\n");
        printf("2. Generate Salary Slip\n");
        printf("3. Display All\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        printf("\n");

        switch (choice) {
            case 1: addEmployee();       break;
            case 2: generateSalarySlip(); break;
            case 3: displayAll();        break;
            case 4: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
        printf("\n");

    } while (choice != 4);

    return 0;
}
