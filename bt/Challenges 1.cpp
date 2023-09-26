#include <iostream>

int main() {
    int num;

    while (true) {
        std::cout << "Enter a positive integer: ";
        std::cin >> num;

        if (num <= 0) {
            std::cout << "Please enter a positive integer." << std::endl;
        }
        else {
            break;
        }
    }

    int sum = 0;

    for (int i = 1; i <= num; i++) {
        sum += i;
    }

    std::cout << "The sum of all integers from 1 to " << num << " is " << sum << std::endl;

    return 0;
}