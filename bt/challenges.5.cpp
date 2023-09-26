#include <iostream>

int main() {
    const double initialFee = 2500.0;
    const double increaseRate = 0.04;
    const int numberOfYears = 6;

    double currentFee = initialFee;

    std::cout << "Year\tMembership Fee" << std::endl;

    for (int year = 1; year <= numberOfYears; year++) {
        double projectedFee = currentFee * (1 + increaseRate);
        std::cout << year << "\t$" << projectedFee << std::endl;
        currentFee = projectedFee;
    }

    return 0;
}