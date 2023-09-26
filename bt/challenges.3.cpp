#include <iostream>

int main() {
    const double risePerYear = 1.5;
    const int numberOfYears = 25;

    std::cout << "Year\tOcean Rise (mm)" << std::endl;

    for (int year = 1; year <= numberOfYears; year++) {
        double oceanRise = risePerYear * year;
        std::cout << year << "\t" << oceanRise << std::endl;
    }

    return 0;
}