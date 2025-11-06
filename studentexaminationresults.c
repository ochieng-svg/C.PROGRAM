#include <stdio.h>
#include <stdlib.h>

// Define a structure to hold student information
struct Student {
    char name[50];
    int reg_no;
    float total_marks;
};

int main() {
    FILE *fp;
    struct Student s;

    // Open the binary file for reading
    fp = fopen("results.dat", "rb");
    if (fp == NULL) {
        printf("Error: Could not open file results.dat\n");
        return 1;
    }

    printf("Student Examination Results:\n");
    printf("---------------------------------\n");

    // Read and display each record
    while (fread(&s, sizeof(struct Student), 1, fp) == 1) {
        printf("Name: %s\n", s.name);
        printf("Total Marks: %.2f\n", s.total_marks);
        printf("---------------------------------\n");
    }

    fclose(fp);
    return 0;
}
