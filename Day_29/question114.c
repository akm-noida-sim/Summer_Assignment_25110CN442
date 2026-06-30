#include <stdio.h>

#define MAX 50

int arr[MAX], n = 0;

//Menu-Driven Array Operations System

void inputArray() 
{
    int i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Array entered successfully!\n");
}

void displayArray() 
{
    if (n == 0) {
        printf("Array is empty! Please enter array first.\n");
        return;
    }
    int i;
    printf("Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void sumAndAverage() {
    int i, sum = 0;
    for (i = 0; i < n; i++) sum += arr[i];
    printf("Sum     = %d\n", sum);
    printf("Average = %.2f\n", (float)sum / n);
}

void maxAndMin() {
    int i, max = arr[0], min = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);
}

void linearSearch() {
    int key, i, found = 0;
    printf("Enter element to search: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("%d found at index %d\n", key, i);
            found = 1;
        }
    }
    if (!found) printf("%d not found in array!\n", key);
}

void bubbleSort() {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp     = arr[j];
                arr[j]   = arr[j + 1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Array sorted in ascending order: ");
    displayArray();
}

void reverseArray() {
    int i, j, temp;
    for (i = 0, j = n - 1; i < j; i++, j--) {
        temp   = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    printf("Array reversed: ");
    displayArray();
}

void countEvenOdd() {
    int i, even = 0, odd = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) even++;
        else odd++;
    }
    printf("Even count = %d\n", even);
    printf("Odd  count = %d\n", odd);
}

int main() {
    int choice;

    printf("=== Menu-Driven Array Operations ===\n\n");

    do {
        printf("1. Input Array\n");
        printf("2. Display Array\n");
        printf("3. Sum and Average\n");
        printf("4. Max and Min\n");
        printf("5. Linear Search\n");
        printf("6. Bubble Sort\n");
        printf("7. Reverse Array\n");
        printf("8. Count Even and Odd\n");
        printf("9. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        printf("\n");

        switch (choice) {
            case 1: inputArray();   break;
            case 2: displayArray(); break;
            case 3: sumAndAverage(); break;
            case 4: maxAndMin();    break;
            case 5: linearSearch(); break;
            case 6: bubbleSort();   break;
            case 7: reverseArray(); break;
            case 8: countEvenOdd(); break;
            case 9: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
        printf("\n");

    } while (choice != 9);

    return 0;
}
