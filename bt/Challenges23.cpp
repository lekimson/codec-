#include <iostream>
using namespace std;

int main() {
    int size = 10;

    // Pattern A
    for (int i = 0; i < size; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "+";
        }
        cout << endl;
    }

    cout << endl;

    // Pattern B
    for (int i = size; i > 0; i--) {
        for (int j = 0; j < size - i; j++) {
            cout << " ";
        }
        for (int k = 0; k < i; k++) {
            cout << "+";
        }
        cout << endl;
    }

    return 0;
}