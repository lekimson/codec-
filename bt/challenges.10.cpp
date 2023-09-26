#include <iostream>

int main() {
    int numYears;

    // Get the number of years from the user
    while (true) {
        std::cout << "Enter the number of years: ";
        std::cin >> numYears;

        if (numYears < 1) {
            std::cout << "Please enter a number greater than or equal to 1." << std::endl;
        }
        else {
            break;
        }
    }

    int totalMonths = numYears * 12;
    double totalRainfall = 0.0;

    // Outer loop for each year
    for (int year = 1; year <= numYears; year++) {
        // Inner loop for each month
        for (int month = 1; month <= 12; month++) {
            double rainfall;

            // Get the inches of rainfall for the current month
            while (true) {
                std::cout << "Enter the inches of rainfall for Year " << year << ", Month " << month << ": ";
                std::cin >> rainfall;

                if (rainfall < 0) {
                    std::cout << "Please enter a non-negative number for rainfall." << std::endl;
                }
                else {
                    break;
                }
            }

            totalRainfall += rainfall;
        }
    }

    // Calculate the average rainfall per month
    double averageRainfall = totalRainfall / totalMonths;

    // Display the results
    std::cout << "Number of months: " << totalMonths << std::endl;
    std::cout << "Total inches of rainfall: " << totalRainfall << std::endl;
    std::cout << "Average rainfall per month: " << averageRainfall << " inches" << std::endl;

    return 0;
}