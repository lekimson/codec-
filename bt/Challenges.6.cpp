#include <iostream>

int main() {
    int speed;
    int time;

    // Get the speed of the vehicle
    do {
        std::cout << "What is the speed of the vehicle in mph? ";
        std::cin >> speed;

        if (speed < 0) {
            std::cout << "Invalid speed. Please enter a non-negative value." << std::endl;
        }
    } while (speed < 0);

    // Get the number of hours traveled
    do {
        std::cout << "How many hours has it traveled? ";
        std::cin >> time;

        if (time < 1) {
            std::cout << "Invalid time. Please enter a value greater than or equal to 1." << std::endl;
        }
    } while (time < 1);

    // Display the table header
    std::cout << "Hour\tDistance Traveled" << std::endl;
    std::cout << "--------------------------------" << std::endl;

    // Calculate and display the distance for each hour
    for (int hour = 1; hour <= time; hour++) {
        int distance = speed * hour;
        std::cout << hour << "\t" << distance << std::endl;
    }

    return 0;
}