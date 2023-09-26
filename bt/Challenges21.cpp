#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int randomNumber = rand() % 100 + 1;

    int guess;
    bool correct = false;
    int guessCount = 0;

    cout << "Hay doan so ngau nhien tu 1 den 100." << endl;

    while (!correct) {
        cout << "Nhap doan cua ban: ";
        cin >> guess;
        guessCount++;

        if (guess > randomNumber) {
            cout << "Qua cao, hay thu lai." << endl;
        } else if (guess < randomNumber) {
            cout << "Qua thap, hay thu lai." << endl;
        } else {
            cout << "Chinh xac! Ban da doan dung so ngau nhien." << endl;
            correct = true;
        }
    }

    cout << "So lan ban da doan: " << guessCount << endl;

    return 0;
}