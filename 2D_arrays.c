#include <stdio.h> int main (){
	//declaration of variables
    int occupancy[5][10], occupied = 0;
    float occupancyRate;
//input the  room data
    for (int floor = 0; floor < 5; floor++) {
        for (int room = 0; room < 10; room++) {
            printf("Enter occupancy for Floor %d Room %d (1=Occupied, 0=Vacant): ", floor+1, room+1);
            scanf("%d", &occupancy[floor][room]);

            if (occupancy[floor][room] == 1) {
                occupied++;
            }
        }
    }
//calculate occupancy rate
    occupancyRate = (occupied / 50.0) * 100;
    //display results
    printf("\nTotal occupied rooms: %d\n", occupied);
    printf("Occupancy rate: %.2f%%\n", occupancyRate);

return 0;
}
