#include <stdio.h>


float calculate_fare(int distance);

int main()
{
    int distance;

    
    printf("Enter distance traveled (in KM): ");
    scanf("%d", &distance);

    printf("Total fare is: KSh. %.2f\n", calculate_fare(distance));

    return 0;
}


float calculate_fare(int distance)
{
    float fare;
    fare = distance * 50;

    return fare;
}