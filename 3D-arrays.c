#include <stdio.h>

int main() {
	//declarationof variables
    int chain[3][5][10], totalOccupied = 0;
    float totalRooms = 3 * 5 * 10, occupancyRate;
//input occupancy data
    for (int branch = 0; branch < 3; branch++) {
        printf("\n--- Branch %d ---\n", branch + 1);
        for (int floor = 0; floor < 5; floor++) {
            for (int room = 0; room < 10; room++) {
                printf("Enter occupancy for Branch %d Floor %d Room %d (1=Occupied, 0=Vacant): ",
                       branch+1, floor+1, room+1);
                scanf("%d", &chain[branch][floor][room]);

                if (chain[branch][floor][room] == 1) {
                    totalOccupied++;
                }
            }
        }
    }
	//calculate occupancy rate

    occupancyRate = (totalOccupied / totalRooms) * 100;
    //display results
    printf("\nTotal occupied rooms across all branches: %d\n", totalOccupied);
    printf("Overall occupancy rate: %.2f%%\n", occupancyRate);

    return 0;
}
