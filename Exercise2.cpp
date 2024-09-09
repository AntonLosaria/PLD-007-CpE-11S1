#include<iostream>
using namespace std;

int main () {
	
	//Initialization and Declaration
	
	int x=4,y=2,sum,difference,product,module;
	float quotient;
	
	
	//Computation
	
	sum = x+y;
	difference = x-y;
	product = x*y;
	quotient = x/y;
	module = x%y;
	
	
	//Displaying output
	
	cout << "The sum of x and y is: " << sum << endl;
	cout << "The difference of x and y is: " << difference << endl;
	cout << "The product of x and y is: " << product << endl;
	cout << "The quotient of x and y is: " << quotient << endl;
	cout << "The module of x and y is: " << module << endl; 
	
	return 0;
}
