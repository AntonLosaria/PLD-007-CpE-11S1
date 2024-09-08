#include<iostream>
using namespace std;

int main () {
	
	int num1=0,num2=0,num3=0,sum=0,difference=0,product=0;
	float average=0,quotient=0;
	int mod =0;
	
	cout << "Input num1: ";
	cin >> num1;
	cout << "Input num2: ";
	cin >> num2;
	cout << "Input num3: ";
	cin >> num3;

	mod = num1%num2;
	
	average = (num1+num2+num3)/3;
	
	sum = num1+num2+num3;
	
	difference=num1-num2-num3;
	
	product=num1*num2*num3;
	
	quotient=(num1/num2)/num3;
	
	cout << "The average of three numbers is: " << average << endl;
	cout << "The remainder is: " << mod << endl;
	
	cout << "The sum of three numbers is: " << sum << endl;
	cout << "The difference of three numbers is: " << difference << endl;
	cout << "The product of three numbers is: " << product << endl;
	cout << "The quotient of three numbers is: " << quotient << endl;
	
	return 0;
}
// Assignment; perform arithmetic add, subtract, multiply, and divide.
