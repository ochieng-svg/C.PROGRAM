#include <stdio.h>

float calculate_Electric_Bill(int units);

int main()
{
    int units;

    
    printf("Enter number of units to be consumed: ");
    scanf("%d", &units);

    printf("Total bill is: KSh. %.2f\n", calculate_Electric_Bill(units));

    return 0;
}


float calculate_Electric_Bill(int units)
{
    float bill;

    if (units <= 100)
        bill = units * 10;
    else if (units <= 200)
        bill = 100 * 10 + (units - 100) * 15;
    else
        bill = (100 * 10) + (100 * 15 )+ (units-200) * 20;

    return bill;
}