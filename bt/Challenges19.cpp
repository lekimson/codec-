#include <iostream>
using namespace std;

int main() {
    double budget;
    cout << "Nhap so tien ban da du phong cho mot thang: ";
    cin >> budget;

    double expense;
    double totalExpense = 0.0;

    char choice;
    do {
        cout << "Nhap so tien chi tieu trong thang: ";
        cin >> expense;

        totalExpense += expense;

        cout << "Ban co muon nhap them chi tieu? (Y/N): ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');

    double difference = totalExpense - budget;
    if (difference >= 0) {
        cout << "Ban da vuot qua ngan sach " << difference << " dong." << endl;
    } else {
        cout << "Ban du " << -difference << " dong so voi ngan sach." << endl;
    }

    return 0;
}