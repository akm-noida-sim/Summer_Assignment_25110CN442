#include<stdio.h>
#include<string.h>

#define MAX 50
//Library Management System
struct Book {
    int bookId;
    char title[100];
    char author[100];
    int quantity;
    int issued;
};

struct Book books[MAX];
int total = 0;

void addBook() {
    if (total >= MAX) {
        printf("Library is full!\n");
        return;
    }
    printf("Enter Book ID  : ");
    scanf("%d", &books[total].bookId);
    scanf(" ");
    printf("Enter Title    : ");
    scanf("%[^\n]", books[total].title);
    printf("Enter Author   : ");
    scanf("%[^\n]", books[total].author);
    printf("Enter Quantity : ");
    scanf("%d", &books[total].quantity);
    books[total].issued = 0;
    total++;
    printf("Book added successfully!\n");
}

void displayBooks() {
    if (total == 0) {
        printf("No books found!\n");
        return;
    }
    int i;
    printf("\n%-6s %-30s %-20s %-5s %-9s\n",
           "ID", "Title", "Author", "Qty", "Available");
    printf("-------------------------------------------------------------------\n");
    for (i = 0; i < total; i++) {
        printf("%-6d %-30s %-20s %-5d %-9d\n",
               books[i].bookId, books[i].title,
               books[i].author, books[i].quantity,
               books[i].quantity - books[i].issued);
    }
    printf("\n");
}

void issueBook() {
    int id, i, found = 0;
    printf("Enter Book ID to issue: ");
    scanf("%d", &id);

    for (i = 0; i < total; i++) {
        if (books[i].bookId == id) {
            if ((books[i].quantity - books[i].issued) > 0) {
                books[i].issued++;
                printf("Book issued successfully!\n");
                printf("Available copies: %d\n", books[i].quantity - books[i].issued);
            } else {
                printf("Sorry! No copies available right now.\n");
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
        if (books[i].bookId == id) {
            if (books[i].issued > 0) {
                books[i].issued--;
                printf("Book returned successfully!\n");
                printf("Available copies: %d\n", books[i].quantity - books[i].issued);
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
    printf("Enter book title to search: ");
    scanf("%[^\n]", keyword);

    for (i = 0; i < total; i++) {
        if (strstr(books[i].title, keyword) != NULL) {
            printf("\nID        : %d\n", books[i].bookId);
            printf("Title     : %s\n", books[i].title);
            printf("Author    : %s\n", books[i].author);
            printf("Available : %d\n\n", books[i].quantity - books[i].issued);
            found = 1;
        }
    }
    if (!found) printf("No matching book found!\n");
}

int main() {
    int choice;

    printf("=== Library Management System ===\n\n");

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
            case 1: addBook();     break;
            case 2: displayBooks(); break;
            case 3: issueBook();   break;
            case 4: returnBook();  break;
            case 5: searchBook();  break;
            case 6: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
        printf("\n");

    } while (choice != 6);

    return 0;
}
