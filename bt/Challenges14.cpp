#include <iostream>
#include <string>
using namespace std;

int main() {
    const int MIN_STUDENTS = 1;
    const int MAX_STUDENTS = 25;

    int numStudents;
    string firstName, frontStudent, endStudent;

    // Yeu cau nhap so luong hoc sinh va kiem tra tinh hop le
    cout << "Nhap so luong hoc sinh trong lop (1-25): ";
    cin >> numStudents;

    while (numStudents < MIN_STUDENTS || numStudents > MAX_STUDENTS) {
        cout << "Nhap khong hop le. Nhap so luong hoc sinh trong lop (1-25): ";
        cin >> numStudents;
    }

    // Vong lap de doc ten cua hoc sinh
    for (int i = 0; i < numStudents; i++) {
        cout << "Nhap ten cua hoc sinh thu " << i + 1 << ": ";
        cin >> firstName;

        if (i == 0) {
            frontStudent = firstName;
            endStudent = firstName;
        } else {
            if (firstName < frontStudent) {
                frontStudent = firstName;
            }

            if (firstName > endStudent) {
                endStudent = firstName;
            }
        }
    }

    // Hien thi hoc sinh dung dau va hoc sinh dung cuoi hang
    cout << "Hoc sinh dung dau hang: " << frontStudent << endl;
    cout << "Hoc sinh dung cuoi hang: " << endStudent << endl;

    return 0;
}