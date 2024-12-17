#include <iostream>
using namespace std;

int add(int num1, int num) {
    return num1 + num;
}

int subt(int num1, int num) {
    return num1 - num;
}

int mult(int num1, int num) {
    return num1 * num;
}

double divide(int num1, int num) {
    if (num != 0)
        return static_cast<double>(num1) / num;
    else {
        cout << "Error: Division by zero is not allowed.\n";
        return 0;
    }
}

int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    cout << "Addition: " << add(num1, num2) << endl;
    cout << "Subtraction: " << subt(num1, num2) << endl;
    cout << "Multiplication: " << mult(num1, num2) << endl;
    cout << "Division: " << divide(num1, num2) << endl;

    return 0;
}
