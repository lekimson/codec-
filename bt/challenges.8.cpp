#include <iostream>

int main() {
    int numFloors;
    int totalRooms = 0;
    int totalOccupiedRooms = 0;

    // Get the number of floors from the user
    std::cout << "Enter the number of floors in the hotel: ";
    std::cin >> numFloors;

    // Iterate over each floor
    for (int floor = 1; floor <= numFloors; floor++) {
        int numRooms;
        int numOccupiedRooms;

        // Get the number of rooms and occupied rooms for the current floor
        std::cout << "Enter the number of rooms on floor " << floor << ": ";
        std::cin >> numRooms;

        totalRooms += numRooms;

        std::cout << "Enter the number of occupied rooms on floor " << floor << ": ";
        std::cin >> numOccupiedRooms;

        totalOccupiedRooms += numOccupiedRooms;
    }

    // Calculate the number of unoccupied rooms
    int totalUnoccupiedRooms = totalRooms - totalOccupiedRooms;

    // Calculate the occupancy rate
    double occupancyRate = (static_cast<double>(totalOccupiedRooms) / totalRooms) * 100;

    // Display the results
    std::cout << "Total rooms in the hotel: " << totalRooms << std::endl;
    std::cout << "Occupied rooms: " << totalOccupiedRooms << std::endl;
    std::cout << "Unoccupied rooms: " << totalUnoccupiedRooms << std::endl;
    std::cout << "Occupancy rate: " << occupancyRate << "%" << std::endl;

    return 0;
}