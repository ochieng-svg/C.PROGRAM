#include <stdio.h>


float convert_to_celcius(int F);

int main()
{
    int F;

    
    printf("Enter temperature in Fahrenheit: ");
    scanf("%d", &F);

    printf("Temperature in Celsius is: %.2f\n", convert_to_celcius(F));

    return 0;
}


float convert_to_celcius(int F)
{
    float C;
    C = (F - 32) * 5/ 9;

    return C;
}