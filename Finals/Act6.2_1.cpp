#include<iostream>
#include<cmath>
using namespace std;


double cube(double side){
	return side*side*side;
}

int main(){
	double side;
	cout << "Enter the side of the cube: ";
	cin >> side;
	cout << "The Area of the Cube is: " << cube(side) << endl;
	return 0; 
}
