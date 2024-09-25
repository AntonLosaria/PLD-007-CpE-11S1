#include<iostream>
using namespace std;

int main() {
	
	// Create a program to determine if the alphabet is a vowel or consonant
	char c;
	
	cout << "Enter the Character: ";
	cin >> c;
	cout << endl;
	
	switch(c){
		
		case 'A':
			cout << "Vowel";
			break;
			
		case 'a':
			cout << "Vowel";
			break;
			
		case 'E':
			cout << "Vowel";
			break;
			
		case 'e':
			cout << "Vowel";
			break;
			
		case 'I':
			cout << "Vowel";
			break;
			
		case 'i':
			cout << "Vowel";
			break;
			
		case 'O':
			cout << "Vowel";
			break;
			
		case 'o':
			cout << "Vowel";
			break;
			
		case 'U':
			cout << "Vowel";
			break;
			
		case 'u':
			cout << "Vowel";
			break;
		default:
			cout << "Consonant";
			break;
			
	}
	
	return 0;
			
}
