#include <stdio.h>

#define MAX 50

struct Employee
{
    int empId;
    char name[100];
    char department[50];
    char designation[50];
    float salary;
};

struct Employee emp[MAX];
int total = 0;

void addEmployee()
{
    if (total == MAX)
    {
        printf("\nEmployee list is full!\n");
        return;
    }

    int id, i;

    printf("Enter Employee ID : ");
    scanf("%d", &id);

    for (i = 0; i < total; i++)
    {
        if (emp[i].empId == id)
        {
            printf("Employee ID already exists!\n");
            return;
        }
    }

    emp[total].empId = id;

    printf("Enter Name : ");
    scanf(" %[^\n]", emp[total].name);

    printf("Enter Department : ");
    scanf(" %[^\n]", emp[total].department);

    printf("Enter Designation : ");
    scanf(" %[^\n]", emp[total].designation);

    printf("Enter Salary : ");
    scanf("%f", &emp[total].salary);

    total++;

    printf("\nEmployee added successfully.\n");
}

void displayAll()
{
    int i;

    if (total == 0)
    {
        printf("\nNo employee records found.\n");
        return;
    }

    printf("\n---------------------------------------------------------------\n");
    printf("%-8s %-20s %-15s %-15s %-10s\n",
           "ID", "Name", "Department", "Designation", "Salary");
    printf("---------------------------------------------------------------\n");

    for (i = 0; i < total; i++)
    {
        printf("%-8d %-20s %-15s %-15s %.2f\n",
               emp[i].empId,
               emp[i].name,
               emp[i].department,
               emp[i].designation,
               emp[i].salary);
    }
}

void searchEmployee()
{
    int id, i;

    printf("Enter Employee ID : ");
    scanf("%d", &id);

    for (i = 0; i < total; i++)
    {
        if (emp[i].empId == id)
        {
            printf("\nEmployee Found\n");
            printf("-----------------------\n");
            printf("ID          : %d\n", emp[i].empId);
            printf("Name        : %s\n", emp[i].name);
            printf("Department  : %s\n", emp[i].department);
            printf("Designation : %s\n", emp[i].designation);
            printf("Salary      : %.2f\n", emp[i].salary);
            return;
        }
    }

    printf("Employee not found.\n");
}

void updateEmployee()
{
    int id, i;

    printf("Enter Employee ID : ");
    scanf("%d", &id);

    for (i = 0; i < total; i++)
    {
        if (emp[i].empId == id)
        {
            printf("Enter New Department : ");
            scanf(" %[^\n]", emp[i].department);

            printf("Enter New Designation : ");
            scanf(" %[^\n]", emp[i].designation);

            printf("Enter New Salary : ");
            scanf("%f", &emp[i].salary);

            printf("Record updated successfully.\n");
            return;
        }
    }

    printf("Employee not found.\n");
}

void deleteEmployee()
{
    int id, i, j;

    printf("Enter Employee ID : ");
    scanf("%d", &id);

    for (i = 0; i < total; i++)
    {
        if (emp[i].empId == id)
        {
            for (j = i; j < total - 1; j++)
            {
                emp[j] = emp[j + 1];
            }

            total--;

            printf("Employee deleted successfully.\n");
            return;
        }
    }

    printf("Employee not found.\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n========== Employee Management System ==========\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Employee\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addEmployee();
            break;

        case 2:
            displayAll();
            break;

        case 3:
            searchEmployee();
            break;

        case 4:
            updateEmployee();
            break;

        case 5:
            deleteEmployee();
            break;

        case 6:
            printf("Program Closed.\n");
            break;

        default:
            printf("Invalid Choice.\n");
        }

    } while (choice != 6);

    return 0;
}
