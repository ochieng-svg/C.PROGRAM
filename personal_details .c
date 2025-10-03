//assignment on program to prompt user to enter details 
//single line comment 
/*
Name:Vict Baraka 
Reg no:PA106/G/28775/25
Description:Program to prompt user to enter details */

#include <stdio.h>

int main() {
    // Variable Declarations
    float height;
    char id_number[20]; // Use a string for ID number
    float bank_balance;
    char phone_number[15]; // Use a string for phone number

    // Collect Height
    printf("enter your height:\\n");
    scanf("%f", &height); // Use %f for float
    printf("your height is: %f\\n", height);

    // Collect ID Number
    printf("enter your ID number:\\n");
    scanf("%s", id_number); // Use %s for string. No '&' is needed for arrays.
    printf("your ID is: %s\\n", id_number);

    // Collect Bank Balance
    printf("enter your bank balance:\\n");
    scanf("%f", &bank_balance); // Use %f for float
    printf("your bank balance is: %f\\n", bank_balance);

    // Collect Phone Number
    printf("enter your phone number:\\n");
    scanf("%s", phone_number); // Use %s for string. No '&' is needed for arrays.
    printf("your phone number is: %s\\n", phone_number);

    // Display all collected information
    printf("\\n--- Collected Information ---\\n");
    printf("Height: %f\\n", height);
    printf("ID Number: %s\\n", id_number);
    printf("Bank Balance: %f\\n", bank_balance);
    printf("Phone Number: %s\\n", phone_number);

    return 0;
}

    
