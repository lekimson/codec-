#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Thiet lap seed cho ham rand()
    srand(time(0));

    // Tao so ngau nhien trong khoang tu 1 den 100
    int randomNumber = rand() % 100 + 1;

    int guess;
    bool correct = false;

    cout << "Hay doan so ngau nhien tu 1 den 100." << endl;

    while (!correct) {
        cout << "Nhap doan cua ban: ";
        cin >> guess;

        if (guess > randomNumber) {
            cout << "Qua cao, hay thu lai." << endl;
        } else if (guess < randomNumber) {
            cout << "Qua thap, hay thu lai." << endl;
        } else {
            cout << "Chinh xac! Ban da doan dung so ngau nhien." << endl;
            correct = true;
        }
    }

    return 0;
}