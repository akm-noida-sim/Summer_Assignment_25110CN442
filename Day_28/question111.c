#include <stdio.h>
#include <string.h>

//Ticket Booking System

#define MAX_SEATS 20

struct Ticket {
    int ticketId;
    char passengerName[100];
    char from[50];
    char to[50];
    char date[20];
    int seatNo;
    float price;
};

struct Ticket tickets[MAX_SEATS];
int total       = 0;
int nextSeat    = 1;
int available   = MAX_SEATS;

void bookTicket() {
    if (available == 0) {
        printf("Sorry! No seats available.\n");
        return;
    }

    tickets[total].ticketId = 1001 + total;

    printf("Enter Passenger Name      : ");
    scanf(" %[^\n]", tickets[total].passengerName);
    printf("Enter From                : ");
    scanf("%s", tickets[total].from);
    printf("Enter To                  : ");
    scanf("%s", tickets[total].to);
    printf("Enter Date (DD/MM/YYYY)   : ");
    scanf("%s", tickets[total].date);

    tickets[total].seatNo = nextSeat++;
    tickets[total].price  = 500.0 + (total * 10);
    available--;

    printf("\nTicket booked successfully!\n");
    printf("Ticket ID   : %d\n", tickets[total].ticketId);
    printf("Seat No     : %d\n", tickets[total].seatNo);
    printf("Price       : Rs. %.2f\n\n", tickets[total].price);

    total++;
}

void viewTicket() {
    int id, i, found = 0;
    printf("Enter Ticket ID: ");
    scanf("%d", &id);

    for (i = 0; i < total; i++) {
        if (tickets[i].ticketId == id) {
            printf("\n==============================\n");
            printf("       TICKET DETAILS\n");
            printf("==============================\n");
            printf("Ticket ID   : %d\n",  tickets[i].ticketId);
            printf("Name        : %s\n",  tickets[i].passengerName);
            printf("From        : %s\n",  tickets[i].from);
            printf("To          : %s\n",  tickets[i].to);
            printf("Date        : %s\n",  tickets[i].date);
            printf("Seat No     : %d\n",  tickets[i].seatNo);
            printf("Price       : Rs. %.2f\n", tickets[i].price);
            printf("==============================\n\n");
            found = 1;
            break;
        }
    }
    if (!found) printf("Ticket not found!\n");
}

void cancelTicket() {
    int id, i, j, found = 0;
    printf("Enter Ticket ID to cancel: ");
    scanf("%d", &id);

    for (i = 0; i < total; i++) {
        if (tickets[i].ticketId == id) {
            for (j = i; j < total - 1; j++) {
                tickets[j] = tickets[j + 1];
            }
            total--;
            available++;
            printf("Ticket cancelled successfully!\n");
            found = 1;
            break;
        }
    }
    if (!found) printf("Ticket not found!\n");
}

void displayAll() {
    if (total == 0) {
        printf("No bookings found!\n");
        return;
    }
    int i;
    printf("\n%-10s %-20s %-10s %-10s %-12s %-6s\n",
           "Ticket ID", "Name", "From", "To", "Date", "Seat");
    printf("-------------------------------------------------------------------\n");
    for (i = 0; i < total; i++) {
        printf("%-10d %-20s %-10s %-10s %-12s %-6d\n",
               tickets[i].ticketId, tickets[i].passengerName,
               tickets[i].from, tickets[i].to,
               tickets[i].date, tickets[i].seatNo);
    }
    printf("Available Seats: %d / %d\n\n", available, MAX_SEATS);
}

int main() {
    int choice;

    printf("=== Ticket Booking System ===\n\n");

    do {
        printf("1. Book Ticket\n");
        printf("2. View Ticket\n");
        printf("3. Cancel Ticket\n");
        printf("4. Display All Bookings\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        printf("\n");

        switch (choice) {
            case 1: bookTicket();  break;
            case 2: viewTicket();  break;
            case 3: cancelTicket(); break;
            case 4: displayAll();  break;
            case 5: printf("Thank you! Goodbye.\n"); break;
            default: printf("Invalid choice!\n");
        }
        printf("\n");

    } while (choice != 5);

    return 0;
}
