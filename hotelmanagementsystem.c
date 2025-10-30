#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Needed for srand() and random data simulation

// --- Function Prototypes for Each Task ---
void weekly_revenue_tracker();
void room_occupancy_one_branch();
void multiple_branches_occupancy();

// ------------------------------------------------------------------
// The SINGLE entry point for the program
// ------------------------------------------------------------------
int main() {
    // Seed the random number generator once at the start for occupancy simulation
    srand(time(NULL));

    printf("🏨 Hotel Management System Array Tasks 🏨\n");

    // Task 1: 1D Array (User Input)
    weekly_revenue_tracker();

    printf("\n--- Task 1 Complete ---\n\n");

    // Task 2: 2D Array (Random Data Simulation)
    room_occupancy_one_branch();

    printf("\n--- Task 2 Complete ---\n\n");

    // Task 3: 3D Array (Random Data Simulation)
    multiple_branches_occupancy();

    printf("\n--- All Tasks Complete ---\n");

    return 0;
}

// ------------------------------------------------------------------
// --- Task 1: 1D Array - Weekly Revenue Tracker (Input Fixed) ---
// ------------------------------------------------------------------
void weekly_revenue_tracker() {
    printf("💵 Task 1: Weekly Revenue Tracker (1D Array)\n");
    // declaration of variables
    float revenue[7], total = 0, average;
    char *days[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

    // input revenue using a loop
    for (int i = 0; i < 7; i++) {
        printf("Enter revenue for %s: $", days[i]);
        scanf("%f", &revenue[i]);
        total += revenue[i];
    }
    // calculate and display results
    average = total / 7.0; // Use 7.0 for float division
    printf("\n--- Results ---\n");
    printf("Total weekly revenue: $%.2f\n", total);
    printf("Average daily revenue: $%.2f\n", average);
}

// ------------------------------------------------------------------
// --- Task 2: 2D Array - Room Occupancy (Simulated Input Fixed) ---
// ------------------------------------------------------------------
void room_occupancy_one_branch() {
    printf("🚪 Task 2: Room Occupancy (2D Array - One Branch)\n");
    
    // declaration of variables
    int occupancy[5][10];
    int occupied_count = 0;
    
    printf("Simulating room occupancy for 5 floors, 10 rooms each...\n");

    // 2. Assign random occupancy data (1 = occupied, 0 = vacant)
    for (int floor = 0; floor < 5; floor++) {
        int floor_occupied = 0;
        int floor_vacant = 0;
        
        for (int room = 0; room < 10; room++) {
            // Assign random occupancy (0 or 1)
            occupancy[floor][room] = rand() % 2; 

            if (occupancy[floor][room] == 1) {
                occupied_count++; // Total count
                floor_occupied++; // Floor count
            } else {
                floor_vacant++;
            }
        }
        // 3. Display number of occupied and vacant rooms per floor.
        printf("Floor %d: **Occupied: %d**, **Vacant: %d**\n", floor + 1, floor_occupied, floor_vacant);
    }
    
    // Display overall results
    printf("\nTotal occupied rooms in this branch: %d\n", occupied_count);
}

// ------------------------------------------------------------------
// --- Task 3: 3D Array - Multiple Branches (Simulated Input Fixed) ---
// ------------------------------------------------------------------
void multiple_branches_occupancy() {
    printf("🏢 Task 3: Multiple Branches (3D Array)\n");
    
    // declaration of variables
    int chain[3][5][10], totalOccupied = 0;
    const float totalRooms = 3.0 * 5.0 * 10.0; // 150 total rooms
    float occupancyRate;
    
    printf("Simulating occupancy across 3 branches...\n");

    // 2. Assign random occupancy (1 or 0) to each room
    for (int branch = 0; branch < 3; branch++) {
        for (int floor = 0; floor < 5; floor++) {
            for (int room = 0; room < 10; room++) {
                // Generates 0 or 1 randomly
                chain[branch][floor][room] = rand() % 2;
                
                // 3. Calculate the total number of occupied rooms across all branches
                if (chain[branch][floor][room] == 1) {
                    totalOccupied++;
                }
            }
        }
    }
    // calculate occupancy rate
    occupancyRate = (totalOccupied / totalRooms) * 100.0;
    
    // display results
    printf("\n--- Results ---\n");
    printf("Total capacity across all branches: **%.0f** rooms\n", totalRooms);
    printf("Total occupied rooms across all branches: **%d**\n", totalOccupied);
    printf("Overall occupancy rate: **%.2f%%**\n", occupancyRate);
}
