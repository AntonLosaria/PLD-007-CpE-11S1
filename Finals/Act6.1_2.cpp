#include <iostream>
using namespace std;

double FToC(double fahr) {
    return (5.0 / 9.0) * (fahr - 32);
}

double CToF(double cels) {
    return (9.0 / 5.0) * cels + 32;
}

int main() {
    double temp;
    int choice;

    cout << "Choose an option: " << endl;
    cout << "1. Convert Fahrenheit to Celsius" << endl;
    cout << "2. Convert Celsius to Fahrenheit" << endl;
    cin >> choice;

    if (choice == 1) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;
        cout << "Temperature in Celsius: " << FToC(temp) << endl;
    } else if (choice == 2) {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;
        cout << "Temperature in Fahrenheit: " << CToF(temp) << endl;
    } else {
        cout << "Invalid choice.\n";
    }

    return 0;
}
