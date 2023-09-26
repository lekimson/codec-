#include <iostream>

int main() {
    const double caloriesPerMinute = 3.6;
    const int numberOfMinutes[] = { 5, 10, 15, 20, 25, 30 };
    const int numberOfEntries = sizeof(numberOfMinutes) / sizeof(numberOfMinutes[0]);

    std::cout << "Minutes\tCalories Burned" << std::endl;

    for (int i = 0; i < numberOfEntries; i++) {
        int minutes = numberOfMinutes[i];
        double caloriesBurned = caloriesPerMinute * minutes;
        std::cout << minutes << "\t" << caloriesBurned << std::endl;
    }

    return 0;
}