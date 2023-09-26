#include <iostream>
using namespace std;

int main() {
    const int MAX_EMPLOYEES = 100;
    
    int employeeNumber;
    double grossPay, stateTax, federalTax, ficaWithholdings;
    double totalGrossPay = 0, totalStateTax = 0, totalFederalTax = 0, totalFicaWithholdings = 0, totalNetPay = 0;
    
    while (true) {
        cout << "Nhap so nhan vien (0 de thoat): ";
        cin >> employeeNumber;
        
        if (employeeNumber == 0) {
            break;  // Thoat khoi vong lap neu so nhan vien la 0
        }
        
        cout << "Nhap luong gop: $";
        cin >> grossPay;
        
        cout << "Nhap thue tieu bang: $";
        cin >> stateTax;
        
        cout << "Nhap thue lien bang: $";
        cin >> federalTax;
        
        cout << "Nhap FICA: $";
        cin >> ficaWithholdings;
        
        // Kiem tra dau vao
        if (grossPay < 0 || stateTax < 0 || federalTax < 0 || ficaWithholdings < 0) {
            cout << "Loi dau vao: Khong chap nhan gia tri am. Vui long nhap lai thong tin cho nhan vien " << employeeNumber << endl;
            continue;  // Tiep tuc vong lap
        }
        
        if (stateTax + federalTax + ficaWithholdings > grossPay) {
            cout << "Loi dau vao: Tong thue tieu bang, thue lien bang va FICA khong duoc vuot qua luong gop. Vui long nhap lai thong tin cho nhan vien " << employeeNumber << endl;
            continue;  // Tiep tuc vong lap
        }
        
        // Cap nhat tong
        totalGrossPay += grossPay;
        totalStateTax += stateTax;
        totalFederalTax += federalTax;
        totalFicaWithholdings += ficaWithholdings;
        
        // Tinh luong rong
        double netPay = grossPay - stateTax - federalTax - ficaWithholdings;
        totalNetPay += netPay;
    }
    
    // Hien thi tong
    cout << "Tong luong gop: $" << totalGrossPay << endl;
    cout << "Tong thue tieu bang: $" << totalStateTax << endl;
    cout << "Tong thue lien bang: $" << totalFederalTax << endl;
    cout << "Tong FICA: $" << totalFicaWithholdings << endl;
    cout << "Tong luong rong: $" << totalNetPay << endl;
    
    return 0;
}