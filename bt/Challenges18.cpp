#include <iostream>
#include <fstream>
using namespace std;

const int NUM_YEARS = 6;

int main() {
    int population[NUM_YEARS];
    string year[NUM_YEARS] = {"1900", "1920", "1940", "1960", "1980", "2000"};

    ifstream inputFile("People.txt");
    if (!inputFile) {
        cout << "Could not open file." << endl;
        return 1;
    }

    for (int i = 0; i < NUM_YEARS; i++) {
        inputFile >> population[i];
    }

    inputFile.close();

    cout << "PRAIRIEVILLE POPULATION GROWTH" << endl;
    cout << "(each * represents 1,000 people)" << endl;

    for (int i = 0; i < NUM_YEARS; i++) {
        cout << year[i] << " ";
        for (int j = 0; j < population[i] / 1000; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}