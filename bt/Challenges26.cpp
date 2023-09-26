#include <iostream>
#include <fstream>

int main() {
    std::ofstream outputFile("final_report.txt"); // Mo tep dau ra

    double balance;
    double annualInterestRate;
    int numMonths;

    // Nhap so du, lai suat hang nam va so thang
    std::cout << "Nhap so du ban dau: $";
    std::cin >> balance;
    std::cout << "Nhap lai suat hang nam (duoi dang thap phan): ";
    std::cin >> annualInterestRate;
    std::cout << "Nhap so thang: ";
    std::cin >> numMonths;

    // Ghi so du ban dau vao tep
    outputFile << "So du ban dau: $" << balance << std::endl;

    // Tinh va hien thi so du cho moi thang
    for (int month = 1; month <= numMonths; month++) {
        // Tinh lai hang thang
        double interest = balance * (annualInterestRate / 12.0);

        // Cap nhat so du
        balance += interest;

        // Ghi so du hang thang vao tep
        outputFile << "Thang " << month << ": $" << balance << std::endl;
    }

    // Dong tep dau ra
    outputFile.close();

    std::cout << "Bao cao cuoi cung da duoc ghi vao tep 'final_report.txt'." << std::endl;

    return 0;
}