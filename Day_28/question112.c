#include <stdio.h>
#include <string.h>

#define MAX 50

// Contact Management System

struct Contact {
    char name[100];
    char phone[15];
    char email[100];
};

struct Contact contacts[MAX];
int total = 0;

void addContact() {
    if (total >= MAX) {
        printf("Contact list is full!\n");
        return;
    }
    printf("Enter Name  : ");
    scanf(" %[^\n]", contacts[total].name);
    printf("Enter Phone : ");
    scanf("%s", contacts[total].phone);
    printf("Enter Email : ");
    scanf("%s", contacts[total].email);
    total++;
    printf("Contact added successfully!\n");
}

void displayAll() {
    if (total == 0) {
        printf("No contacts found!\n");
        return;
    }
    int i;
    printf("\n%-5s %-20s %-15s %-30s\n", "No.", "Name", "Phone", "Email");
    printf("--------------------------------------------------------------\n");
    for (i = 0; i < total; i++) {
        printf("%-5d %-20s %-15s %-30s\n",
               i + 1, contacts[i].name,
               contacts[i].phone, contacts[i].email);
    }
    printf("\n");
}

void searchContact() {
    char keyword[100];
    int i, found = 0;
    printf("Enter name to search: ");
    scanf(" %[^\n]", keyword);

    for (i = 0; i < total; i++) {
        if (strstr(contacts[i].name, keyword) != NULL) {
            printf("\nName  : %s\n", contacts[i].name);
            printf("Phone : %s\n", contacts[i].phone);
            printf("Email : %s\n\n", contacts[i].email);
            found = 1;
        }
    }
    if (!found) printf("Contact not found!\n");
}

void updateContact() {
    char name[100];
    int i, found = 0;
    printf("Enter name to update: ");
    scanf(" %[^\n]", name);

    for (i = 0; i < total; i++) {
        if (strcmp(contacts[i].name, name) == 0) {
            printf("Enter new Phone : ");
            scanf("%s", contacts[i].phone);
            printf("Enter new Email : ");
            scanf("%s", contacts[i].email);
            printf("Contact updated successfully!\n");
            found = 1;
            break;
        }
    }
    if (!found) printf("Contact not found!\n");
}

void deleteContact() {
    char name[100];
    int i, j, found = 0;
    printf("Enter name to delete: ");
    scanf(" %[^\n]", name);

    for (i = 0; i < total; i++) {
        if (strcmp(contacts[i].name, name) == 0) {
            for (j = i; j < total - 1; j++) {
                contacts[j] = contacts[j + 1];
            }
            total--;
            printf("Contact deleted successfully!\n");
            found = 1;
            break;
        }
    }
    if (!found) printf("Contact not found!\n");
}

int main() {
    int choice;

    printf("=== Contact Management System ===\n\n");

    do {
        printf("1. Add Contact\n");
        printf("2. Display All\n");
        printf("3. Search Contact\n");
        printf("4. Update Contact\n");
        printf("5. Delete Contact\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        printf("\n");

        switch (choice) {
            case 1: addContact();    break;
            case 2: displayAll();    break;
            case 3: searchContact(); break;
            case 4: updateContact(); break;
            case 5: deleteContact(); break;
            case 6: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
        printf("\n");

    } while (choice != 6);

    return 0;
}
