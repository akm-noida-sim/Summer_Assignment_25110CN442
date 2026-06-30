#include <stdio.h>
#include <string.h>

#define MAX 50
// Bank Account System
struct Account {
    int accNo;
    char name[100];
    char accType[20];
    float balance;
};

struct Account accounts[MAX];
int total = 0;

int findAccount(int accNo) {
    int i;
    for (i = 0; i < total; i++) {
        if (accounts[i].accNo == accNo) return i;
    }
    return -1;
}

void createAccount() {
    if (total >= MAX) {
        printf("Bank is full!\n");
        return;
    }
    printf("Enter Account Number    : ");
    scanf("%d", &accounts[total].accNo);

    if (findAccount(accounts[total].accNo) != -1) {
        printf("Account number already exists!\n");
        return;
    }

    scanf(" ");
    printf("Enter Name              : ");
    scanf("%[^\n]", accounts[total].name);
    printf("Enter Account Type      : ");
    scanf("%s", accounts[total].accType);
    printf("Enter Initial Deposit   : Rs. ");
    scanf("%f", &accounts[total].balance);

    if (accounts[total].balance < 1000) {
        printf("Minimum initial deposit is Rs. 1000!\n");
        return;
    }

    total++;
    printf("Account created successfully!\n");
}

void deposit() {
    int accNo, idx;
    float amount;

    printf("Enter Account Number: ");
    scanf("%d", &accNo);
    idx = findAccount(accNo);

    if (idx == -1) {
        printf("Account not found!\n");
        return;
    }

    printf("Enter amount to deposit: Rs. ");
    scanf("%f", &amount);

    if (amount <= 0) {
        printf("Invalid amount!\n");
        return;
    }

    accounts[idx].balance += amount;
    printf("Rs. %.2f deposited. New Balance: Rs. %.2f\n",
           amount, accounts[idx].balance);
}

void withdraw() {
    int accNo, idx;
    float amount;

    printf("Enter Account Number: ");
    scanf("%d", &accNo);
    idx = findAccount(accNo);

    if (idx == -1) {
        printf("Account not found!\n");
        return;
    }

    printf("Enter amount to withdraw: Rs. ");
    scanf("%f", &amount);

    if (amount <= 0) {
        printf("Invalid amount!\n");
    } else if (amount > accounts[idx].balance - 1000) {
        printf("Insufficient balance! Minimum balance of Rs. 1000 must be maintained.\n");
    } else {
        accounts[idx].balance -= amount;
        printf("Rs. %.2f withdrawn. Remaining Balance: Rs. %.2f\n",
               amount, accounts[idx].balance);
    }
}

void checkBalance() {
    int accNo, idx;
    printf("Enter Account Number: ");
    scanf("%d", &accNo);
    idx = findAccount(accNo);

    if (idx == -1) {
        printf("Account not found!\n");
        return;
    }

    printf("\nAccount No   : %d\n", accounts[idx].accNo);
    printf("Name         : %s\n", accounts[idx].name);
    printf("Account Type : %s\n", accounts[idx].accType);
    printf("Balance      : Rs. %.2f\n\n", accounts[idx].balance);
}

void displayAll() {
    if (total == 0) {
        printf("No accounts found!\n");
        return;
    }
    int i;
    printf("\n%-12s %-20s %-12s %-12s\n",
           "Acc No", "Name", "Type", "Balance");
    printf("----------------------------------------------------------\n");
    for (i = 0; i < total; i++) {
        printf("%-12d %-20s %-12s Rs.%.2f\n",
               accounts[i].accNo, accounts[i].name,
               accounts[i].accType, accounts[i].balance);
    }
    printf("\n");
}

int main() {
    int choice;

    printf("=== Bank Account System ===\n\n");

    do {
        printf("1. Create Account\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Check Balance\n");
        printf("5. Display All Accounts\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        printf("\n");

        switch (choice) {
            case 1: createAccount(); break;
            case 2: deposit();       break;
            case 3: withdraw();      break;
            case 4: checkBalance();  break;
            case 5: displayAll();    break;
            case 6: printf("Thank you! Goodbye.\n"); break;
            default: printf("Invalid choice!\n");
        }
        printf("\n");

    } while (choice != 6);

    return 0;
}
