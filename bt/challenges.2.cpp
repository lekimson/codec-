#include <iostream>

int main() {
    const int charactersPerLine = 16;

    for (int i = 0; i <= 127; i++) {
        std::cout << static_cast<char>(i) << " ";

        if ((i + 1) % charactersPerLine == 0) {
            std::cout << std::endl;
        }
    }

    return 0;
}