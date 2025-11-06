#include <stdio.h>

int main() {
    FILE *file;
    double amount, total = 0.0;

    // Open the file in read mode
    file = fopen("sales.txt", "r");

    // Check if the file exists or opened successfully
    if (file == NULL) {
        printf("Error: Could not open file 'sales.txt'.\n");
        return 1;
    }

    // Read each transaction amount from the file and add to total
    while (fscanf(file, "%lf", &amount) == 1) {
        total += amount;
    }

    // Display the total sales for the day
    printf("Total sales for the day: KSh. %.2f\n", total);

    // Close the file properly
    fclose(file);

    return 0;
}
