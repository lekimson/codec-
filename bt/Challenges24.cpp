#include <iostream>
#include <fstream>

int main() {
    std::ifstream inputFile("Random.txt"); // Mo tep dau vao

    if (!inputFile) {
        std::cout << "Loi khi mo tep. Hay dam bao rang tep 'Random.txt' ton tai." << std::endl;
        return 1;
    }

    int number;
    int count = 0;
    int sum = 0;

    // Doc cac so tu tep va tinh toan so luong va tong
    while (inputFile >> number) {
        count++;
        sum += number;
    }

    inputFile.close(); // Dong tep dau vao

    double average = static_cast<double>(sum) / count;

    // Hien thi ket qua
    std::cout << "So luong so trong tep: " << count << std::endl;
    std::cout << "Tong cua tat ca cac so: " << sum << std::endl;
    std::cout << "Trung binh cua tat ca cac so: " << average << std::endl;

    return 0;
}