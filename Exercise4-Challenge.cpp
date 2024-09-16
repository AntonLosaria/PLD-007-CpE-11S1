#include<iostream>
using namespace std;

int main(){
	
	int i=4;
	int j=10;
	int k=3;
	
	cout << "Print out an integer that is less than 10 but not less than 3" << endl;
	
	while (i<j && !(i<=k)){
		cout << "Number: " << i << endl;
		i++;
	}
	return 0;
	
}
