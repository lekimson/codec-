#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main() {
    std::ifstream inputFile("LineUp.txt"); // Mo tep dau vao

    if (!inputFile) {
        std::cout << "Loi khi mo tep. Hay dam bao rang tep 'LineUp.txt' ton tai." << std::endl;
        return 1;
    }

    std::vector<std::string> names;
    std::string name;

    // Doc ten tu tep cho den khi khong con du lieu
    while (std::getline(inputFile, name)) {
        names.push_back(name);
    }

    inputFile.close(); // Dong tep dau vao

    // Hien thi cac ten
    std::cout << "Danh sach hoc sinh:" << std::endl;
    for (const std::string& student : names) {
        std::cout << student << std::endl;
    }

    return 0;
}