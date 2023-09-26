#include <iostream>
using namespace std;

int main() {
    int sideLength;

    cout << "Nhap mot so nguyen duong khong lon hon 15: ";
    cin >> sideLength;

    if (sideLength <= 0 || sideLength > 15) {
        cout << "So ban nhap khong hop le." << endl;
        return 0;
    }

    for (int i = 0; i < sideLength; i++) {
        for (int j = 0; j < sideLength; j++) {
            cout << "X";
        }
        cout << endl;
    }

    return 0;
}