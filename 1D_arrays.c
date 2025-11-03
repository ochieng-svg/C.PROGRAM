#include <stdio.h>

int main() {
	//declaration of variables
    float revenue[7], total = 0, average;
    char *days[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
//input revenue using a loop
    for (int i = 0; i < 7; i++) {
        printf("Enter revenue for %s: ", days[i]);
        scanf("%f", &revenue[i]);
        total += revenue[i];
    }
//calculate and display results
    average = total / 7;
    printf("\nTotal weekly revenue: %.2f\n", total);
    printf("Average daily revenue: %.2f\n", average);

    return 0;
}
