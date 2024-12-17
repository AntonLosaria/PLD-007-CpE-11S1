#include <iostream>
using namespace std;

double DolToP(double dollars, double eRate) {
    return dollars * eRate;
}

double PToDol(double pesos, double eRate) {
    return pesos / eRate;
}

int main() {
    double amount, eRate;
    int choice;

    cout << "Enter the current exchange rate (1 Dollar = X Pesos): ";
    cin >> eRate;

    cout << "Choose an option:\n";
    cout << "1. Convert Dollars to Pesos\n";
    cout << "2. Convert Pesos to Dollars\n";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter amount in Dollars: ";
        cin >> amount;
        cout << "Amount in Pesos: " << DolToP(amount, eRate) << endl;
    } else if (choice == 2) {
        cout << "Enter amount in Pesos: ";
        cin >> amount;
        cout << "Amount in Dollars: " << PToDol(amount, eRate) << endl;
    } else {
        cout << "Invalid choice.\n";
    }

    return 0;
}
