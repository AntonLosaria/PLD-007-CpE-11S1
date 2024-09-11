#include<iostream>
using namespace std;

int main (){
	
	//Initialization of variables
	double grade;
	
	cout << "Enter your grade: ";
	cin >> grade;

	if (grade >= 94 && grade <= 100){
		cout << "Equivalant Grade: 1.00" << endl << "Excellent" << endl;
	}
	else if (grade >= 88.5 && grade <= 93.99){
		cout << "Equivalant Grade: 1.25" << endl << "Superior" << endl;
	}
	else if (grade >= 83 && grade <= 88.49){
		cout << "Equivalant Grade: 1.50" << endl << "Meritorious" << endl;
	}
	else if (grade >= 77.5 && grade <= 82.99){
		cout << "Equivalant Grade: 1.75" << endl << "Very Good" << endl;
	}
	else if (grade >= 72 && grade <= 77.49){
		cout << "Equivalant Grade: 2.00" << endl << "Good" << endl;
	}
	else if (grade >= 65.5 && grade <= 71.99){
		cout << "Equivalant Grade: 2.25" << endl << "Very Satisfactory" << endl;
	}
	else if (grade >= 61 && grade <= 65.49){
		cout << "Equivalant Grade: 2.50" << endl << "Satisfactory" << endl;
	}
	else if (grade >= 55.5 && grade <= 60.99){
		cout << "Equivalant Grade: 2.75" << endl << "Fair" << endl;
	}
	else if (grade >= 50 && grade <= 55.49){
		cout << "Equivalant Grade: 3.00" << endl << "Passing" << endl;
	}
	else if (grade >= 0 && grade <= 49.99){
		cout << "Equivalant Grade: 5.00" << endl << "Failed" << endl;
	}
	else {
		cout << "You did not enter the correct value" << endl;
	}
	
	return 0;
}
