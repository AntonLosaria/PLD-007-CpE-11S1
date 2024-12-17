#include<iostream>
#include<cmath>
using namespace std;


double hyp(double side1, double side2){
	return sqrt(side1 * side1 + side2 * side2);
}

int main(){
	double side1, side2;
	cout << "Enter the two sides of the triangle" << endl;
	cout << "Side1: ";
	cin >> side1;
	cout << "Side2: ";
	cin >> side2;
	cout << "The hypothenus of the triangle is: " << hypo(side1, side2) << endl;
	return 0; 
}
