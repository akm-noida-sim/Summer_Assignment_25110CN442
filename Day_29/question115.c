#include <stdio.h>
#include <string.h>

char str[200];

//Menu-Driven String Operations System

void inputString() 
{
    printf("Enter a string: ");
    scanf(" %[^\n]", str);
    printf("String entered: %s\n", str);
}

void findLength() {
    int i = 0;
    while (str[i] != '\0') i++;
    printf("Length of string = %d\n", i);
}

void reverseString() {
    int i, len = strlen(str);
    printf("Reversed string: ");
    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

void checkPalindrome() {
    int i, len = strlen(str), flag = 1;
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("%s is a Palindrome\n", str);
    else
        printf("%s is NOT a Palindrome\n", str);
}

void countVowelsConsonants() {
    int i, v = 0, c = 0;
    char ch;
    for (i = 0; str[i] != '\0'; i++) {
        ch = str[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
                ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
                v++;
            else
                c++;
        }
    }
    printf("Vowels     = %d\n", v);
    printf("Consonants = %d\n", c);
}

void toUppercase() {
    int i;
    char result[200];
    for (i = 0; str[i] != '\0'; i++) {
        result[i] = (str[i] >= 'a' && str[i] <= 'z') ? str[i] - 32 : str[i];
    }
    result[i] = '\0';
    printf("Uppercase: %s\n", result);
}

void toLowercase() {
    int i;
    char result[200];
    for (i = 0; str[i] != '\0'; i++) {
        result[i] = (str[i] >= 'A' && str[i] <= 'Z') ? str[i] + 32 : str[i];
    }
    result[i] = '\0';
    printf("Lowercase: %s\n", result);
}

void countWords() {
    int i, words = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0')
            words++;
    }
    if (str[0] != '\0') words++;
    printf("Word count = %d\n", words);
}

void removeSpaces() {
    int i, j = 0;
    char result[200];
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') result[j++] = str[i];
    }
    result[j] = '\0';
    printf("Without spaces: %s\n", result);
}

int main() {
    int choice;

    printf("=== Menu-Driven String Operations ===\n\n");

    do {
        printf("1.  Input String\n");
        printf("2.  Find Length\n");
        printf("3.  Reverse String\n");
        printf("4.  Check Palindrome\n");
        printf("5.  Count Vowels & Consonants\n");
        printf("6.  Convert to Uppercase\n");
        printf("7.  Convert to Lowercase\n");
        printf("8.  Count Words\n");
        printf("9.  Remove Spaces\n");
        printf("10. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        printf("\n");

        switch (choice) {
            case 1:  inputString();         break;
            case 2:  findLength();          break;
            case 3:  reverseString();       break;
            case 4:  checkPalindrome();     break;
            case 5:  countVowelsConsonants(); break;
            case 6:  toUppercase();         break;
            case 7:  toLowercase();         break;
            case 8:  countWords();          break;
            case 9:  removeSpaces();        break;
            case 10: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
        printf("\n");

    } while (choice != 10);

    return 0;
}
