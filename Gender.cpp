#include<iostream>
using namespace std;


int main() {
	
	// Create a program to determine if the alphabet is a vowel or consonant
	char gender;
	
	cout << "Enter your Gender (M or F): ";
	cin >> gender;
	cout << endl;
	
	switch(gender){
		case 'M':
			cout << "You are male";
			break;
		case 'm':
			cout << "You are male";
			break;
		case 'F':
			cout << "You are female";
			break;
		case 'f':
			cout << "You are female";
			break;
		default:
			cout << "Invalid gender, try again";
			break;
					
	}
}
