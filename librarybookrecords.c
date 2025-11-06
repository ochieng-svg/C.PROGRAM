
/*
NAME:Victor Baraka 
REG NO:PA106/G/28775/25
DESCRIPTION:program for a library book borrowing system
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char title[200];
    char choice;

    printf("=== Library Book Borrowing System ===\n");

    // Open the file in append mode so existing records are not deleted
    file = fopen("borrowed_books.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    do {
        printf("\nEnter the title of the borrowed book: ");
        // Read a full line including spaces
        fgets(title, sizeof(title), stdin);

        // Write the title to the file
        fprintf(file, "%s", title);

        printf("Book title successfully stored in borrowed_books.txt\n");

        printf("\nDo you want to enter another title? (y/n): ");
        scanf(" %c", &choice);
        getchar(); // clear newline character from input buffer

    } while (choice == 'y' || choice == 'Y');

    fclose(file);
    printf("\nAll entries have been saved successfully.\n");

    return 0;
}
