#include <iostream>
using namespace std;

int main (){
	int x, parity;
	
	cout << "Program that determines whether a number is odd or even" << endl;
	cout << "Input a number: ";
	cin >> x;
	
	parity = x%2;
	if (parity==0)
		cout << "The number " << x << " is an even number" << endl;
	else
		cout << "The number " << x << " is an odd number" << endl;
		
	return 0; 
	
}
