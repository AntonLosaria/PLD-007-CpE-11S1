#include <iostream>
using namespace std;

int main (){
	
	int age;
	float discount, fare;
	const float minfare = 9.00;
	char student;
	string s;
	
	cout << "Enter your age: ";
	cin >> age;
	
	
	if (age>=65){
		discount = 0.10;
	}else {
		cout << "Are you a student? Y/N: ";
		cin >> student, s;
		if (student == 'Y' || student == 'y' || s == "Yes" || s == "yes"){
		discount = 0.08;	
	}
	}
	
	
	fare = minfare - (minfare*discount);
	
	
	cout << "Your fare will be: " << fare << endl;
	
	return 0; 
	
}
