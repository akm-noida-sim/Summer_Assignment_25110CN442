#include <stdio.h>
#include <string.h>

#define MAX 50

//Inventory Management System

struct Item {
    int itemId;
    char name[100];
    int quantity;
    float price;
};

struct Item inventory[MAX];
int total = 0;

void addItem() {
    if (total >= MAX) {
        printf("Inventory is full!\n");
        return;
    }
    printf("Enter Item ID    : ");
    scanf("%d", &inventory[total].itemId);
    scanf(" ");
    printf("Enter Item Name  : ");
    scanf("%[^\n]", inventory[total].name);
    printf("Enter Quantity   : ");
    scanf("%d", &inventory[total].quantity);
    printf("Enter Price (Rs.): ");
    scanf("%f", &inventory[total].price);
    total++;
    printf("Item added successfully!\n");
}

void displayAll() {
    if (total == 0) {
        printf("Inventory is empty!\n");
        return;
    }
    int i;
    float totalValue = 0;
    printf("\n%-6s %-25s %-8s %-10s %-12s\n",
           "ID", "Name", "Qty", "Price", "Total Value");
    printf("--------------------------------------------------------------\n");
    for (i = 0; i < total; i++) {
        float val = inventory[i].quantity * inventory[i].price;
        totalValue += val;
        printf("%-6d %-25s %-8d Rs.%-8.2f Rs.%.2f\n",
               inventory[i].itemId, inventory[i].name,
               inventory[i].quantity, inventory[i].price, val);
    }
    printf("--------------------------------------------------------------\n");
    printf("Total Inventory Value : Rs. %.2f\n\n", totalValue);
}

void updateStock() {
    int id, qty, i, found = 0;
    printf("Enter Item ID   : ");
    scanf("%d", &id);

    for (i = 0; i < total; i++) {
        if (inventory[i].itemId == id) {
            printf("Current stock   : %d\n", inventory[i].quantity);
            printf("Enter qty to add: ");
            scanf("%d", &qty);
            inventory[i].quantity += qty;
            printf("Stock updated! New quantity: %d\n", inventory[i].quantity);
            found = 1;
            break;
        }
    }
    if (!found) printf("Item not found!\n");
}

void searchItem() {
    int id, i, found = 0;
    printf("Enter Item ID to search: ");
    scanf("%d", &id);

    for (i = 0; i < total; i++) {
        if (inventory[i].itemId == id) {
            printf("\nID       : %d\n",       inventory[i].itemId);
            printf("Name     : %s\n",         inventory[i].name);
            printf("Quantity : %d\n",         inventory[i].quantity);
            printf("Price    : Rs. %.2f\n\n", inventory[i].price);
            found = 1;
            break;
        }
    }
    if (!found) printf("Item not found!\n");
}

void lowStockAlert() {
    int i, found = 0;
    printf("\n=== Low Stock Alert (Quantity < 10) ===\n");
    for (i = 0; i < total; i++) {
        if (inventory[i].quantity < 10) {
            printf("ID: %-6d | %-25s | Qty: %d\n",
                   inventory[i].itemId, inventory[i].name, inventory[i].quantity);
            found = 1;
        }
    }
    if (!found) printf("All items are well stocked!\n");
    printf("\n");
}

int main() {
    int choice;

    printf("=== Inventory Management System ===\n\n");

    do {
        printf("1. Add Item\n");
        printf("2. Display All Items\n");
        printf("3. Update Stock\n");
        printf("4. Search Item\n");
        printf("5. Low Stock Alert\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        printf("\n");

        switch (choice) {
            case 1: addItem();       break;
            case 2: displayAll();   break;
            case 3: updateStock();  break;
            case 4: searchItem();   break;
            case 5: lowStockAlert(); break;
            case 6: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
        printf("\n");

    } while (choice != 6);

    return 0;
}
