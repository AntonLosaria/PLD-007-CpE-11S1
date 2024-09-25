#include<iostream>
using namespace std;

int main(){
	//Create a c++ program that applies a calculator function
	//jose anton losaria
	double num1;
	double num2;
	double result;
	char operation;
	
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	cout << "Enter the operator(+,-,/,*): ";
	cin >> operation;
	
	switch (operation){
		case '+':
			result = num1 + num2;
			cout << "Sum is: " << result;
			break;
		case '-':
			result = num1 - num2;
			cout << "Difference is: " << result;
			break;
		case '/':
			if (num2==0){
				cout << "You cannot divide by 0";
			} else {
				result = num1 / num2;
				cout << "Quotient is: " << result;
			}
			break;
		case '*':
			result = num1 * num2;
			cout << "Product is: " << result;
			break;
		default:
			cout << "You did not enter an operator";
			break;			
	}
	
	return 0;
}
