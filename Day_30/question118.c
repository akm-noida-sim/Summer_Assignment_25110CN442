#include <stdio.h>
#include <string.h>
// Mini Library System

#define MAX 30

// Using separate arrays (no struct)
int  bookId[MAX];
char title[MAX][100];
char author[MAX][100];
int  qty[MAX];
int  issued[MAX];
int  total = 0;

void addBook() {
    if (total >= MAX) {
        printf("Library is full!\n");
        return;
    }
    printf("Enter Book ID  : ");
    scanf("%d", &bookId[total]);
    scanf(" ");
    printf("Enter Title    : ");
    scanf("%[^\n]", title[total]);
    printf("Enter Author   : ");
    scanf("%[^\n]", author[total]);
    printf("Enter Quantity : ");
    scanf("%d", &qty[total]);
    issued[total] = 0;
    total++;
    printf("Book added successfully!\n");
}

void displayBooks() {
    if (total == 0) {
        printf("No books found!\n");
        return;
    }
    int i;
    printf("\n%-6s %-28s %-20s %-5s %-9s\n",
           "ID", "Title", "Author", "Qty", "Available");
    printf("----------------------------------------------------------------------\n");
    for (i = 0; i < total; i++) {
        printf("%-6d %-28s %-20s %-5d %-9d\n",
               bookId[i], title[i], author[i],
               qty[i], qty[i] - issued[i]);
    }
    printf("\n");
}

void issueBook() {
    int id, i, found = 0;
    printf("Enter Book ID to issue: ");
    scanf("%d", &id);

    for (i = 0; i < total; i++) {
        if (bookId[i] == id) {
            if ((qty[i] - issued[i]) > 0) {
                issued[i]++;
                printf("Book issued! Available copies: %d\n", qty[i] - issued[i]);
            } else {
                printf("No copies available!\n");
            }
            found = 1;
            break;
        }
    }
    if (!found) printf("Book not found!\n");
}

void returnBook() {
    int id, i, found = 0;
    printf("Enter Book ID to return: ");
    scanf("%d", &id);

    for (i = 0; i < total; i++) {
        if (bookId[i] == id) {
            if (issued[i] > 0) {
                issued[i]--;
                printf("Book returned! Available copies: %d\n", qty[i] - issued[i]);
            } else {
                printf("No issued copies to return!\n");
            }
            found = 1;
            break;
        }
    }
    if (!found) printf("Book not found!\n");
}

void searchBook() {
    char keyword[100];
    int i, found = 0;
    scanf(" ");
    printf("Enter title keyword to search: ");
    scanf("%[^\n]", keyword);

    for (i = 0; i < total; i++) {
        if (strstr(title[i], keyword) != NULL) {
            printf("\nID        : %d\n",  bookId[i]);
            printf("Title     : %s\n",   title[i]);
            printf("Author    : %s\n",   author[i]);
            printf("Available : %d\n\n", qty[i] - issued[i]);
            found = 1;
        }
    }
    if (!found) printf("No matching book found!\n");
}

int main() {
    int choice;

    printf("=== Mini Library System ===\n\n");

    do {
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Issue Book\n");
        printf("4. Return Book\n");
        printf("5. Search Book\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        printf("\n");

        switch (choice) {
            case 1: addBook();      break;
            case 2: displayBooks(); break;
            case 3: issueBook();    break;
            case 4: returnBook();   break;
            case 5: searchBook();   break;
            case 6: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
        printf("\n");

    } while (choice != 6);

    return 0;
}
