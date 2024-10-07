#include <iostream>

using namespace std;

int main (){
	int counter;
	float grade, average, total;
	int sentinel = -1;
	
	cout << "Program to compute average of inputted grades" << endl;
	cout << "Input grade (-1 if none): ";
	cin >> grade;
	
	while (grade != -1){
		total += grade;
		counter++;
		cout << "Input grade (-1 if none): ";
		cin >> grade;
	}
	if (counter != 0){
		average = total/counter;
		cout << "The average of your grades is: " << average << endl;
	} else {
		cout << "No grades were entered" << endl;0
	}
	return 0;
}
