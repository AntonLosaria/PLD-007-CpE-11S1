#include<iostream>
using namespace std;

int main(){
	int i;
	cout << "Input starting point of loop: ";
	cin >> i;
	int start = i;
	int last;
	int limit = i+4;
	int sum;
	do{
		cout << "Value of i: " << i << endl;
		last = i;
		i++;
		
		
	}while(i<=limit);
	sum = start + last;
	cout << "Sum of the first and last number is: " << sum << endl;
	
	return 0;
}
