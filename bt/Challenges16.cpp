#include <iostream>
using namespace std;

int main() {
    double annualInterestRate, startingBalance;
    int numMonths;

    cout << "Nhap lai suat hang nam: ";
    cin >> annualInterestRate;

    cout << "Nhap so du ban dau: $";
    cin >> startingBalance;

    cout << "Nhap so thang: ";
    cin >> numMonths;

    double monthlyInterestRate = annualInterestRate / 12;
    double balance = startingBalance;
    double totalDeposits = 0, totalWithdrawals = 0, totalInterest = 0;

    for (int i = 1; i <= numMonths; i++) {
        double deposit, withdrawal;

        cout << "\nThang " << i << endl;
        cout << "Nhap so tien gui: $";
        cin >> deposit;

        while (deposit < 0) {
            cout << "So tien khong hop le. Vui long nhap mot gia tri duong: $";
            cin >> deposit;
        }

        totalDeposits += deposit;
        balance += deposit;

        cout << "Nhap so tien rut: $";
        cin >> withdrawal;

        while (withdrawal < 0) {
            cout << "So tien khong hop le. Vui long nhap mot gia tri duong: $";
            cin >> withdrawal;
        }

        totalWithdrawals += withdrawal;
        balance -= withdrawal;

        double monthlyInterest = balance * monthlyInterestRate;
        balance += monthlyInterest;
        totalInterest += monthlyInterest;
    }

    cout << "\nSo du cuoi cung: $" << balance << endl;
    cout << "Tong so tien gui: $" << totalDeposits << endl;
    cout << "Tong so tien rut: $" << totalWithdrawals << endl;
    cout << "Tong lai suat da kiem duoc: $" << totalInterest << endl;

    return 0;
}