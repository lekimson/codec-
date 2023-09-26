#include <iostream>
#include <iomanip>

int main() {
    std::cout << "Celsius to Fahrenheit Conversion Table" << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "Celsius   Fahrenheit" << std::endl;
    std::cout << "-------------------" << std::endl;

    for (int celsius = 0; celsius <= 20; celsius++) {
        double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
        std::cout << std::setw(3) << celsius << "°C      " << std::setw(6) << std::fixed << std::setprecision(2) << fahrenheit << "°F" << std::endl;
    }

    return 0;
}